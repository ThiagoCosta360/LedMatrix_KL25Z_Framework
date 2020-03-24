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
    /* This one is driven LOW for chip selection */
    mkl_GPIOPort SPI_CS;

    /* This is the array of patterns from ascii table */
    mkl_MatrixPatterns ascii;
    /* We keep track of the led-status in this array */
    uint8_t status[8];

    /* This is the string saved for the panel */
    char *panelBuffer;
    /* This is the position of the char being displayed in the panel string*/
    uint8_t panelPosition;
    /* This is the pattern of the next char to be displayed in the panel string*/
    uint8_t transition[8];
    /* This is the position of the column being displayed of the transition pattern*/
    uint8_t transitionPosition;
    /* This is the column being displayed of the transition pattern*/
    uint8_t columnBuffer;

public:
    /* 
    * Create a new controler
    * Params :
    * dataPin		pin on the Arduino where data gets shifted out
    * clockPin		pin for the clock
    * csPin		    pin for selecting the device
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
    *           for normal operation.
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
    * Update the led states with the values of the status 
    * Params: 
    */
    void writeStatus();

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

    /* 
    * Set all 8 Led's in a column to a new state
    * Params:
    * column	column which is to be set (0..7)
    * value	each bit set to 1 will light up the
    * corresponding Led.
    */
    void setColumn(uint8_t col, uint8_t value);

    /*
    * Call for two spi transfers, sending 8 bits representing 
    * the option code and 8 bits representing the data
    * Params: 
    * msb   option code (most significant bit)
    * lsb   option code (least significant bit)
    */
    void writeCode(uint8_t msb, uint8_t lsb);

    /*
    * Update the led matrix status
    * Params: 
    * pattern  the matrix of bits that represent the leds
    */
    void updateStatus(uint8_t pattern[8]);

    /*
    * Print on the console the current led status
    * Params: 
    */
    void printStatus();

    /*
    * Set the entire matix to a new pattern in ascii table, 
    * Params: 
    * letter    the character in ascii code
    */
    void setChar(char letter);

    /*
    * Invert each led state, 
    * Params: 
    */
    void invertStatus();

    /*
    * Create a new panel string. 
    * Params: 
    * panelBuffer   the string of characters that will roll on the matrix
    */
    void createPanel(const char *panelBuffer);

    /*
    * Shift all the led states one position left and add the next panel column. 
    * Params: 
    */
    void nextPanelFrame();

    /*
    * Shift all the led states to the left. 
    * Params: 
    * distance number of columns to be shifted (1..7)
    */
    void moveStatusLeft(uint8_t distance);

    /*
    * Shift all the led states to the rigth. 
    * Params: 
    * distance number of columns to be shifted (1..7)
    */
    void moveStatusRigth(uint8_t distance);

    /*
    * Shift all the led states up. 
    * Params: 
    * distance number of columns to be shifted (1..7)
    */
    void moveStatusUp(uint8_t distance);

    /*
    * Shift all the led states down. 
    * Params: 
    * distance number of columns to be shifted (1..7)
    */
    void moveStatusDown(uint8_t distance);

    /*
    * Save in a number the bits of the column in the pattern. 
    * Params: 
    * col   the position of the column to be saved
    * pattenr   a matrix of bits
    */
    void getColumn(uint8_t col, uint8_t pattern[8]);

    /*
    * Save in a bit matrix transition the values of pattenr  
    * Params: 
    * pattenr   a matrix of bits
    */
    void setTransition(uint8_t pattern[8]);
    
};

#endif //  MKL_MATRIX_H_