#include "MKL25Z4.h"
#include "./mkl_MATRIX.h"
#include <chrono>

mkl_Matrix matrix(gpio_PTC6, gpio_PTC5, gpio_PTC4);

uint8_t pattern_happy_face[8] =
    {
        0b00111100,
        0b01000010,
        0b10100101,
        0b10000001,
        0b10100101,
        0b10011001,
        0b01000010,
        0b00111100};

uint8_t pattern_sad_face[8] =
    {
        0b00111100,
        0b01000010,
        0b10100101,
        0b10000001,
        0b10011001,
        0b10100101,
        0b01000010,
        0b00111100};

/*!
 *   @fn         delayMs.
 *
 *   @brief      Implements code delay of cycle_number milliseconds.
 *
 *   @param[in]  time - time in milliseconds of desired delay.
 *
 */
void delayMs(int time)
{
  for (int i = 0; i < time; i++)
    for (int j = 0; j < 7000; j++)
    {
    }
}

int main()
{
  matrix.setStatus(pattern_happy_face);
  matrix.writeStatus();

  delayMs(100);
  matrix.setLed(2, 2, false);
  delayMs(50);
  matrix.setLed(2, 2, true);
  delayMs(100);

  matrix.setStatus(pattern_sad_face);
  matrix.writeStatus();
  matrix.setColumn(0, 0b11000011);
  matrix.setColumn(7, 0b11000011);
  delayMs(50);

  matrix.setChar('A');
  delayMs(100);
  matrix.setChar('S');
  delayMs(100);
  matrix.setChar('C');
  delayMs(100);
  matrix.setChar('I');
  delayMs(100);
  matrix.setChar('I');
  delayMs(100);
  matrix.setChar(':');
  delayMs(100);

  for (int i = 32; i < 128; i++)
  {
    matrix.setChar((char)i);
    delayMs(50);
  }

  matrix.createPanel("Miguel Grimm - Arquitetura 2020");
  while (true)
  {
    matrix.nextPanelFrame();
    delayMs(25);
  }

  return 0;
}
