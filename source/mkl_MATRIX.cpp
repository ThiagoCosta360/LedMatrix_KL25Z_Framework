#include "mkl_MATRIX.h"

mkl_Matrix::mkl_Matrix(gpio_Pin mosiPin, gpio_Pin clkPin, gpio_Pin csPin) : SPI_MOSI(mosiPin), SPI_CLK(clkPin), SPI_CS(csPin)
{
	SPI_MOSI.setPortMode(gpio_output);
	SPI_MOSI.writeBit(true); //true = high

	SPI_CS.setPortMode(gpio_output);
	SPI_CS.writeBit(true);

	SPI_CLK.setPortMode(gpio_output);
	SPI_CLK.writeBit(true);

	//setAscii();

	writeCode(OP_DECODEMODE, 0x00);  // Decoding off
	writeCode(OP_INTENSITY, 0x08);   // Brightness to intermediate
	writeCode(OP_SCANLIMIT, 0x07);   // Scan limit = 7
	writeCode(OP_SHUTDOWN, 0x01);	// Normal operation mode
	writeCode(OP_DISPLAYTEST, 0x0F); // Enable display test
	writeCode(OP_DIGIT0, 0x00);		 // Clear row 0.
	writeCode(OP_DIGIT1, 0x00);		 // Clear row 1.
	writeCode(OP_DIGIT2, 0x00);		 // Clear row 2.
	writeCode(OP_DIGIT3, 0x00);		 // Clear row 3.
	writeCode(OP_DIGIT4, 0x00);		 // Clear row 4.
	writeCode(OP_DIGIT5, 0x00);		 // Clear row 5.
	writeCode(OP_DIGIT6, 0x00);		 // Clear row 6.
	writeCode(OP_DIGIT7, 0x00);		 // Clear row 7.
	writeCode(OP_DISPLAYTEST, 0x00); // Disable display test
}

void mkl_Matrix::setScanLimit(uint8_t scanLimit)
{
	writeCode(OP_SCANLIMIT, scanLimit);
}

void mkl_Matrix::setIntensity(uint8_t intensity)
{
	writeCode(OP_INTENSITY, intensity);
}

void mkl_Matrix::shutdown(bool status)
{
	if (status)
		writeCode(OP_SHUTDOWN, 0);
	else
		writeCode(OP_SHUTDOWN, 1);
}

void mkl_Matrix::clearDisplay()
{
	for (int i = 1; i <= 8; i++)
		status[i - 1] = 0;
	writeStatus();
}

void mkl_Matrix::setDisplay()
{
	for (int i = 1; i <= 8; i++)
		status[i - 1] = 255;
	writeStatus();
}

void mkl_Matrix::setStatus(uint8_t pattern[8])
{
	for (int i = 0; i < 8; i++)
		status[i] = pattern[i];
}

void mkl_Matrix::writeStatus()
{
	for (int i = 1; i <= 8; i++)
		setRow(i, status[i - 1]);
}

void mkl_Matrix::setLed(int row, int col, bool state)
{
	status[row] = (status[row] & ~(1 << col)) | (state << col);
	writeStatus();
}

void mkl_Matrix::setRow(uint8_t row, uint8_t value)
{
	writeCode(row, value);
}

void mkl_Matrix::setColumn(uint8_t col, uint8_t value)
{
	for (int i = 0; i < 8; i++)
		status[i] = (status[i] & ~(1 << col)) | (((value >> i) & 1) << col);
	writeStatus();
}

void mkl_Matrix::writeCode(uint8_t msb, uint8_t lsb)
{
	SPI_CS.writeBit(false);
	spiTransfer(msb);
	spiTransfer(lsb);
	SPI_CS.writeBit(true);
}

void mkl_Matrix::spiTransfer(uint8_t data)
{
	for (int i = 0; i < 8; i++)
	{
		SPI_MOSI.writeBit(data & 0b10000000);
		data = data << 1;

		SPI_CLK.writeBit(true);
		SPI_CLK.writeBit(false);
	}
}

void mkl_Matrix::printStatus()
{
	int statusRow;
	for (int i = 0; i < 8; i++)
	{
		statusRow = status[i];
		for (int j = 0; j < 8; j++)
		{
			printf("%d", statusRow & 0b10000000);
			statusRow = statusRow << 1;
		}
		printf("\n");
	}
}

void mkl_Matrix::invertStatus()
{
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			status[i] = (status[i] ^ (1 << j));
	writeStatus();
}

void mkl_Matrix::moveStatusLeft(uint8_t distance)
{
	for (int i = 0; i < 8; i++)
		status[i] = (status[i] << distance);
	writeStatus();
}

void mkl_Matrix::moveStatusRigth(uint8_t distance)
{
	for (int i = 0; i < 8; i++)
		status[i] = (status[i] >> distance);
	writeStatus();
}

void mkl_Matrix::moveStatusUp(uint8_t distance)
{
	for (int i = 0; i < 8; i++)
	{
		if ((i + distance) > 8)
			status[i] = status[i + distance];
		else
			status[i] = 0;
	}
	writeStatus();
}

void mkl_Matrix::moveStatusDown(uint8_t distance)
{
	for (int i = 8; i > 0; i--)
	{
		if ((i - distance) < 0)
			status[i] = status[i - distance];
		else
			status[i] = 0;
	}
	writeStatus();
}

void mkl_Matrix::setChar(char letter)
{
	setStatus(ascii.patterns[(int)letter]);
	writeStatus();
}

void mkl_Matrix::createPanel(const char *text)
{
	panelBuffer = (char *)malloc(sizeof(char) * (strlen(text) + 1));
	strcpy(panelBuffer, text);
	setChar(panelBuffer[0]);
	setTransition(ascii.patterns[(int)panelBuffer[1]]);
	transitionPosition = 0;
}

void mkl_Matrix::nextPanelFrame()
{
	moveStatusLeft(1);
	transitionPosition--;
	if (transitionPosition > 7)
	{
		panelPosition++;
		transitionPosition = 8;
		if (panelPosition >= strlen(panelBuffer))
		{
			panelPosition = 0;
		}
		setTransition(ascii.patterns[(int)panelBuffer[panelPosition]]);
	}
	getColumn(transitionPosition, transition);
	setColumn(0, columnBuffer);
}

void mkl_Matrix::getColumn(uint8_t col, uint8_t pattern[8])
{
	columnBuffer = 0;
	for (int i = 0; i < 8; i++)
		columnBuffer |= (((pattern[i] >> col) & 1) << i);
}

void mkl_Matrix::setTransition(uint8_t pattern[8])
{
	for (int i = 0; i < 8; i++)
		transition[i] = pattern[i];
}