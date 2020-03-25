#ifndef MKL_MAX7219_H_
#define MKL_MAX7219_H_

#include "./mkl_GPIOPort.h"
#include <cstdint>

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

class mkl_MAX7219
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

    
public:
    explicit mkl_MAX7219(gpio_Pin dataPin, gpio_Pin clkPin, gpio_Pin csPin);

    /*
    * Call for two spi transfers, sending 8 bits representing 
    * the option code and 8 bits representing the data
    * Params: 
    * msb   option code (most significant bit)
    * lsb   option code (least significant bit)
    */
    void writeCode(uint8_t msb, uint8_t lsb);

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

};

#endif //  MKL_MAX7219_H_
