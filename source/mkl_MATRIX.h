#ifndef MKL_MATRIX_H_
#define MKL_MATRIX_H_

#include <cstdint>
#include "./mkl_GPIOPort.h"
#include "./mkl_MatrixPatterns.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
    OP_NOOP = 0,
    OP_DIGIT0,
    OP_DIGIT1,
    OP_DIGIT2,
    OP_DIGIT3,
    OP_DIGIT4,
    OP_DIGIT5,
    OP_DIGIT6,
    OP_DIGIT7,
    OP_DECODEMODE,
    OP_INTENSITY,
    OP_SCANLIMIT,
    OP_SHUTDOWN,
    OP_DISPLAYTEST = 15,
} max7219_options;

class mkl_Matrix
{

private:
    /* The array for shifting the data to the devices */
    uint8_t spidata[16];
    /* Send out a single command to the device */
    void spiTransfer(uint8_t data);
    /* Data is shifted out of this pin*/
    mkl_GPIOPort SPI_MOSI;
    /* The clock is signaled on this pin */
    mkl_GPIOPort SPI_CLK;
    /* This one is driven LOW for chip selectzion */
    mkl_GPIOPort SPI_CS;

    mkl_MatrixPatterns ascii;

    char *panelBuffer;

    uint8_t panelPosition;

public:
    /* We keep track of the led-status for all 8 devices in this array */
    uint8_t status[8];

    uint8_t transition[8];

    uint8_t transitionPosition;

    uint8_t columnBuffer;
    /* 
    * Create a new controler
    * Params :
    * dataPin		pin on the Arduino where data gets shifted out
    * clockPin		pin for the clock
    * csPin		pin for selecting the device
    */
    explicit mkl_Matrix(gpio_Pin dataPin, gpio_Pin clkPin, gpio_Pin csPin);

    /* 
    * Set the number of digits (or rows) to be displayed.
    * See datasheet for sideeffects of the scanlimit on the brightness
    * of the display.
    * Params :
    * scanLimit	number of digits to be displayed (1..8)
    */
    void setScanLimit(uint8_t scanLimit);

    /* 
    * Set the brightness of the display.
    * Params:
    * intensity	the brightness of the display. (0..15)
    */
    void setIntensity(uint8_t intensity);

    /* 
    * Set the shutdown (power saving) mode for the device
    * Params :
    * status	If true the device goes into power-down mode. Set to false
    *		for normal operation.
    */
    void shutdown(bool status);

    /* 
    * Switch all Leds on the display off. 
    * Params:
    */
    void clearDisplay();

    /* 
    * Switch all Leds on the display on. 
    * Params:
    */
    void setDisplay();

    /* 
         * Switch all Leds on the display as the pattern bits. 
         * Params:
         * pattern  the matrix of bits that represent the leds
         */
    void setStatus(uint8_t pattern[8]);

    /* 
         * Set the status of a single Led.
         * Params :
         * row	the row of the Led (0..7)
         * col	the column of the Led (0..7)
         * state	If true the led is switched on, 
         *		if false it is switched off
         */
    void setLed(int row, int col, bool state);

    /* 
         * Set all 8 Led's in a row to a new state
         * Params:
         * row	row which is to be set (0..7)
         * value	each bit set to 1 will light up the
         *		corresponding Led.
         */
    void setRow(uint8_t row, uint8_t value);

    void setColumn(uint8_t col, uint8_t value);

    void writeCode(uint8_t msb, uint8_t lsb);

    void updateStatus(uint8_t pattern[8]);

    void printStatus();

    void setChar(char letter);

    void invertStatus();

    void createPanel(const char *panelBuffer);

    void nextPanelFrame();

    void moveStatusLeft(uint8_t distance);

    void moveStatusRigth(uint8_t distance);

    void moveStatusUp(uint8_t distance);

    void moveStatusDown(uint8_t distance);

    void writeStatus();

    void getColumn(uint8_t col, uint8_t pattern[8]);

    void setTransition(uint8_t pattern[8]);
    
};

#endif //  MKL_MATRIX_H_