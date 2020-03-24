#include "mkl_MatrixPatterns.h"

mkl_MatrixPatterns::mkl_MatrixPatterns()
{
    createData();
}

void mkl_MatrixPatterns::createData()
{
    patterns[32][0] = 0b00000000;
    patterns[32][1] = 0b00000000;
    patterns[32][2] = 0b00000000;
    patterns[32][3] = 0b00000000;
    patterns[32][4] = 0b00000000;
    patterns[32][5] = 0b00000000;
    patterns[32][6] = 0b00000000;
    patterns[32][7] = 0b00000000;
    patterns[33][0] = 0b00000000;
    patterns[33][1] = 0b00011000;
    patterns[33][2] = 0b00011000;
    patterns[33][3] = 0b00011000;
    patterns[33][4] = 0b00011000;
    patterns[33][5] = 0b00011000;
    patterns[33][6] = 0b00000000;
    patterns[33][7] = 0b00011000;
    patterns[34][0] = 0b00000000;
    patterns[34][1] = 0b00110110;
    patterns[34][2] = 0b00110110;
    patterns[34][3] = 0b00100100;
    patterns[34][4] = 0b00000000;
    patterns[34][5] = 0b00000000;
    patterns[34][6] = 0b00000000;
    patterns[34][7] = 0b00000000;
    patterns[35][0] = 0b00000000;
    patterns[35][1] = 0b00110110;
    patterns[35][2] = 0b00110110;
    patterns[35][3] = 0b01111111;
    patterns[35][4] = 0b00110110;
    patterns[35][5] = 0b01111111;
    patterns[35][6] = 0b00110110;
    patterns[35][7] = 0b00110110;
    patterns[36][0] = 0b00000000;
    patterns[36][1] = 0b00001000;
    patterns[36][2] = 0b00011110;
    patterns[36][3] = 0b00100000;
    patterns[36][4] = 0b00011100;
    patterns[36][5] = 0b00000010;
    patterns[36][6] = 0b00111100;
    patterns[36][7] = 0b00001000;
    patterns[37][0] = 0b00000000;
    patterns[37][1] = 0b01100000;
    patterns[37][2] = 0b01100110;
    patterns[37][3] = 0b00001100;
    patterns[37][4] = 0b00011000;
    patterns[37][5] = 0b00110000;
    patterns[37][6] = 0b01100110;
    patterns[37][7] = 0b00000110;
    patterns[38][0] = 0b00000000;
    patterns[38][1] = 0b00111100;
    patterns[38][2] = 0b01100110;
    patterns[38][3] = 0b00111100;
    patterns[38][4] = 0b00101000;
    patterns[38][5] = 0b01100101;
    patterns[38][6] = 0b01100110;
    patterns[38][7] = 0b00111111;
    patterns[39][0] = 0b00000000;
    patterns[39][1] = 0b00011000;
    patterns[39][2] = 0b00011000;
    patterns[39][3] = 0b00011000;
    patterns[39][4] = 0b00000000;
    patterns[39][5] = 0b00000000;
    patterns[39][6] = 0b00000000;
    patterns[39][7] = 0b00000000;
    patterns[40][0] = 0b00000000;
    patterns[40][1] = 0b00000110;
    patterns[40][2] = 0b00001100;
    patterns[40][3] = 0b00011000;
    patterns[40][4] = 0b00011000;
    patterns[40][5] = 0b00011000;
    patterns[40][6] = 0b00001100;
    patterns[40][7] = 0b00000110;
    patterns[41][0] = 0b00000000;
    patterns[41][1] = 0b01100000;
    patterns[41][2] = 0b00110000;
    patterns[41][3] = 0b00011000;
    patterns[41][4] = 0b00011000;
    patterns[41][5] = 0b00011000;
    patterns[41][6] = 0b00110000;
    patterns[41][7] = 0b01100000;
    patterns[42][0] = 0b00000000;
    patterns[42][1] = 0b00000000;
    patterns[42][2] = 0b00110110;
    patterns[42][3] = 0b00011100;
    patterns[42][4] = 0b01111111;
    patterns[42][5] = 0b00011100;
    patterns[42][6] = 0b00110110;
    patterns[42][7] = 0b00000000;
    patterns[43][0] = 0b00000000;
    patterns[43][1] = 0b00000000;
    patterns[43][2] = 0b00001000;
    patterns[43][3] = 0b00001000;
    patterns[43][4] = 0b00111110;
    patterns[43][5] = 0b00001000;
    patterns[43][6] = 0b00001000;
    patterns[43][7] = 0b00000000;
    patterns[44][0] = 0b00000000;
    patterns[44][1] = 0b00000110;
    patterns[44][2] = 0b00001100;
    patterns[44][3] = 0b00011000;
    patterns[44][4] = 0b00000000;
    patterns[44][5] = 0b00000000;
    patterns[44][6] = 0b00000000;
    patterns[44][7] = 0b00000000;
    patterns[45][0] = 0b00000000;
    patterns[45][1] = 0b00000000;
    patterns[45][2] = 0b00000000;
    patterns[45][3] = 0b00000000;
    patterns[45][4] = 0b00111100;
    patterns[45][5] = 0b00000000;
    patterns[45][6] = 0b00000000;
    patterns[45][7] = 0b00000000;
    patterns[46][0] = 0b00000000;
    patterns[46][1] = 0b00000000;
    patterns[46][2] = 0b00000000;
    patterns[46][3] = 0b00000000;
    patterns[46][4] = 0b00000000;
    patterns[46][5] = 0b00000000;
    patterns[46][6] = 0b01100000;
    patterns[46][7] = 0b01100000;
    patterns[47][0] = 0b00000000;
    patterns[47][1] = 0b00000000;
    patterns[47][2] = 0b00000110;
    patterns[47][3] = 0b00001100;
    patterns[47][4] = 0b00011000;
    patterns[47][5] = 0b00110000;
    patterns[47][6] = 0b01100000;
    patterns[47][7] = 0b00000000;
    patterns[48][0] = 0b00000000;
    patterns[48][1] = 0b00111100;
    patterns[48][2] = 0b01100110;
    patterns[48][3] = 0b01101110;
    patterns[48][4] = 0b01110110;
    patterns[48][5] = 0b01100110;
    patterns[48][6] = 0b01100110;
    patterns[48][7] = 0b00111100;
    patterns[49][0] = 0b00000000;
    patterns[49][1] = 0b00011000;
    patterns[49][2] = 0b00011000;
    patterns[49][3] = 0b00111000;
    patterns[49][4] = 0b00011000;
    patterns[49][5] = 0b00011000;
    patterns[49][6] = 0b00011000;
    patterns[49][7] = 0b01111110;
    patterns[50][0] = 0b00000000;
    patterns[50][1] = 0b00111100;
    patterns[50][2] = 0b01100110;
    patterns[50][3] = 0b00000110;
    patterns[50][4] = 0b00001100;
    patterns[50][5] = 0b00110000;
    patterns[50][6] = 0b01100000;
    patterns[50][7] = 0b01111110;
    patterns[51][0] = 0b00000000;
    patterns[51][1] = 0b00111100;
    patterns[51][2] = 0b01100110;
    patterns[51][3] = 0b00000110;
    patterns[51][4] = 0b00011100;
    patterns[51][5] = 0b00000110;
    patterns[51][6] = 0b01100110;
    patterns[51][7] = 0b00111100;
    patterns[52][0] = 0b00000000;
    patterns[52][1] = 0b00001100;
    patterns[52][2] = 0b00011100;
    patterns[52][3] = 0b00101100;
    patterns[52][4] = 0b01001100;
    patterns[52][5] = 0b01111110;
    patterns[52][6] = 0b00001100;
    patterns[52][7] = 0b00001100;
    patterns[53][0] = 0b00000000;
    patterns[53][1] = 0b01111110;
    patterns[53][2] = 0b01100000;
    patterns[53][3] = 0b01111100;
    patterns[53][4] = 0b00000110;
    patterns[53][5] = 0b00000110;
    patterns[53][6] = 0b01100110;
    patterns[53][7] = 0b00111100;
    patterns[54][0] = 0b00000000;
    patterns[54][1] = 0b00111100;
    patterns[54][2] = 0b01100110;
    patterns[54][3] = 0b01100000;
    patterns[54][4] = 0b01111100;
    patterns[54][5] = 0b01100110;
    patterns[54][6] = 0b01100110;
    patterns[54][7] = 0b00111100;
    patterns[55][0] = 0b00000000;
    patterns[55][1] = 0b01111110;
    patterns[55][2] = 0b01100110;
    patterns[55][3] = 0b00001100;
    patterns[55][4] = 0b00001100;
    patterns[55][5] = 0b00011000;
    patterns[55][6] = 0b00011000;
    patterns[55][7] = 0b00011000;
    patterns[56][0] = 0b00000000;
    patterns[56][1] = 0b00111100;
    patterns[56][2] = 0b01100110;
    patterns[56][3] = 0b01100110;
    patterns[56][4] = 0b00111100;
    patterns[56][5] = 0b01100110;
    patterns[56][6] = 0b01100110;
    patterns[56][7] = 0b00111100;
    patterns[57][0] = 0b00000000;
    patterns[57][1] = 0b00111100;
    patterns[57][2] = 0b01100110;
    patterns[57][3] = 0b01100110;
    patterns[57][4] = 0b00111110;
    patterns[57][5] = 0b00000110;
    patterns[57][6] = 0b01100110;
    patterns[57][7] = 0b00111100;
    patterns[58][0] = 0b00000000;
    patterns[58][1] = 0b00000000;
    patterns[58][2] = 0b00011000;
    patterns[58][3] = 0b00011000;
    patterns[58][4] = 0b00000000;
    patterns[58][5] = 0b00011000;
    patterns[58][6] = 0b00011000;
    patterns[58][7] = 0b00000000;
    patterns[59][0] = 0b00000000;
    patterns[59][1] = 0b00000000;
    patterns[59][2] = 0b00011000;
    patterns[59][3] = 0b00011000;
    patterns[59][4] = 0b00000000;
    patterns[59][5] = 0b00011000;
    patterns[59][6] = 0b00011000;
    patterns[59][7] = 0b00110000;
    patterns[60][0] = 0b00000000;
    patterns[60][1] = 0b00000110;
    patterns[60][2] = 0b00001100;
    patterns[60][3] = 0b00011000;
    patterns[60][4] = 0b00110000;
    patterns[60][5] = 0b00011000;
    patterns[60][6] = 0b00001100;
    patterns[60][7] = 0b00000110;
    patterns[61][0] = 0b00000000;
    patterns[61][1] = 0b00000000;
    patterns[61][2] = 0b00000000;
    patterns[61][3] = 0b00111100;
    patterns[61][4] = 0b00000000;
    patterns[61][5] = 0b00111100;
    patterns[61][6] = 0b00000000;
    patterns[61][7] = 0b00000000;
    patterns[62][0] = 0b00000000;
    patterns[62][1] = 0b01100000;
    patterns[62][2] = 0b00110000;
    patterns[62][3] = 0b00011000;
    patterns[62][4] = 0b00001100;
    patterns[62][5] = 0b00011000;
    patterns[62][6] = 0b00110000;
    patterns[62][7] = 0b01100000;
    patterns[63][0] = 0b00000000;
    patterns[63][1] = 0b00111100;
    patterns[63][2] = 0b01100110;
    patterns[63][3] = 0b00000110;
    patterns[63][4] = 0b00011100;
    patterns[63][5] = 0b00011000;
    patterns[63][6] = 0b00000000;
    patterns[63][7] = 0b00011000;
    patterns[64][0] = 0b00000000;
    patterns[64][1] = 0b00111000;
    patterns[64][2] = 0b01000100;
    patterns[64][3] = 0b01011100;
    patterns[64][4] = 0b01011000;
    patterns[64][5] = 0b01000010;
    patterns[64][6] = 0b00111100;
    patterns[64][7] = 0b00000000;
    patterns[65][0] = 0b00000000;
    patterns[65][1] = 0b00111100;
    patterns[65][2] = 0b01100110;
    patterns[65][3] = 0b01100110;
    patterns[65][4] = 0b01111110;
    patterns[65][5] = 0b01100110;
    patterns[65][6] = 0b01100110;
    patterns[65][7] = 0b01100110;
    patterns[66][0] = 0b00000000;
    patterns[66][1] = 0b01111100;
    patterns[66][2] = 0b01100110;
    patterns[66][3] = 0b01100110;
    patterns[66][4] = 0b01111100;
    patterns[66][5] = 0b01100110;
    patterns[66][6] = 0b01100110;
    patterns[66][7] = 0b01111100;
    patterns[67][0] = 0b00000000;
    patterns[67][1] = 0b00111100;
    patterns[67][2] = 0b01100110;
    patterns[67][3] = 0b01100000;
    patterns[67][4] = 0b01100000;
    patterns[67][5] = 0b01100000;
    patterns[67][6] = 0b01100110;
    patterns[67][7] = 0b00111100;
    patterns[68][0] = 0b00000000;
    patterns[68][1] = 0b01111100;
    patterns[68][2] = 0b01100110;
    patterns[68][3] = 0b01100110;
    patterns[68][4] = 0b01100110;
    patterns[68][5] = 0b01100110;
    patterns[68][6] = 0b01100110;
    patterns[68][7] = 0b01111100;
    patterns[69][0] = 0b00000000;
    patterns[69][1] = 0b01111110;
    patterns[69][2] = 0b01100000;
    patterns[69][3] = 0b01100000;
    patterns[69][4] = 0b01111100;
    patterns[69][5] = 0b01100000;
    patterns[69][6] = 0b01100000;
    patterns[69][7] = 0b01111110;
    patterns[70][0] = 0b00000000;
    patterns[70][1] = 0b01111110;
    patterns[70][2] = 0b01100000;
    patterns[70][3] = 0b01100000;
    patterns[70][4] = 0b01111100;
    patterns[70][5] = 0b01100000;
    patterns[70][6] = 0b01100000;
    patterns[70][7] = 0b01100000;
    patterns[71][0] = 0b00000000;
    patterns[71][1] = 0b00111100;
    patterns[71][2] = 0b01100110;
    patterns[71][3] = 0b01100000;
    patterns[71][4] = 0b01100000;
    patterns[71][5] = 0b01101110;
    patterns[71][6] = 0b01100110;
    patterns[71][7] = 0b00111100;
    patterns[72][0] = 0b00000000;
    patterns[72][1] = 0b01100110;
    patterns[72][2] = 0b01100110;
    patterns[72][3] = 0b01100110;
    patterns[72][4] = 0b01111110;
    patterns[72][5] = 0b01100110;
    patterns[72][6] = 0b01100110;
    patterns[72][7] = 0b01100110;
    patterns[73][0] = 0b00000000;
    patterns[73][1] = 0b00111100;
    patterns[73][2] = 0b00011000;
    patterns[73][3] = 0b00011000;
    patterns[73][4] = 0b00011000;
    patterns[73][5] = 0b00011000;
    patterns[73][6] = 0b00011000;
    patterns[73][7] = 0b00111100;
    patterns[74][0] = 0b00000000;
    patterns[74][1] = 0b00011110;
    patterns[74][2] = 0b00001100;
    patterns[74][3] = 0b00001100;
    patterns[74][4] = 0b00001100;
    patterns[74][5] = 0b01101100;
    patterns[74][6] = 0b01101100;
    patterns[74][7] = 0b00111000;
    patterns[75][0] = 0b00000000;
    patterns[75][1] = 0b01100110;
    patterns[75][2] = 0b01101100;
    patterns[75][3] = 0b01111000;
    patterns[75][4] = 0b01110000;
    patterns[75][5] = 0b01111000;
    patterns[75][6] = 0b01101100;
    patterns[75][7] = 0b01100110;
    patterns[76][0] = 0b00000000;
    patterns[76][1] = 0b01100000;
    patterns[76][2] = 0b01100000;
    patterns[76][3] = 0b01100000;
    patterns[76][4] = 0b01100000;
    patterns[76][5] = 0b01100000;
    patterns[76][6] = 0b01100000;
    patterns[76][7] = 0b01111110;
    patterns[77][0] = 0b00000000;
    patterns[77][1] = 0b01100011;
    patterns[77][2] = 0b01110111;
    patterns[77][3] = 0b01111111;
    patterns[77][4] = 0b01101011;
    patterns[77][5] = 0b01100011;
    patterns[77][6] = 0b01100011;
    patterns[77][7] = 0b01100011;
    patterns[78][0] = 0b00000000;
    patterns[78][1] = 0b01100011;
    patterns[78][2] = 0b01110011;
    patterns[78][3] = 0b01111011;
    patterns[78][4] = 0b01101111;
    patterns[78][5] = 0b01100111;
    patterns[78][6] = 0b01100011;
    patterns[78][7] = 0b01100011;
    patterns[79][0] = 0b00000000;
    patterns[79][1] = 0b00111100;
    patterns[79][2] = 0b01100110;
    patterns[79][3] = 0b01100110;
    patterns[79][4] = 0b01100110;
    patterns[79][5] = 0b01100110;
    patterns[79][6] = 0b01100110;
    patterns[79][7] = 0b00111100;
    patterns[80][0] = 0b00000000;
    patterns[80][1] = 0b01111100;
    patterns[80][2] = 0b01100110;
    patterns[80][3] = 0b01100110;
    patterns[80][4] = 0b01100110;
    patterns[80][5] = 0b01111100;
    patterns[80][6] = 0b01100000;
    patterns[80][7] = 0b01100000;
    patterns[81][0] = 0b00000000;
    patterns[81][1] = 0b00111100;
    patterns[81][2] = 0b01100110;
    patterns[81][3] = 0b01100110;
    patterns[81][4] = 0b01100110;
    patterns[81][5] = 0b01101110;
    patterns[81][6] = 0b00111100;
    patterns[81][7] = 0b00000110;
    patterns[82][0] = 0b00000000;
    patterns[82][1] = 0b01111100;
    patterns[82][2] = 0b01100110;
    patterns[82][3] = 0b01100110;
    patterns[82][4] = 0b01111100;
    patterns[82][5] = 0b01111000;
    patterns[82][6] = 0b01101100;
    patterns[82][7] = 0b01100110;
    patterns[83][0] = 0b00000000;
    patterns[83][1] = 0b00111100;
    patterns[83][2] = 0b01100110;
    patterns[83][3] = 0b01100000;
    patterns[83][4] = 0b00111100;
    patterns[83][5] = 0b00000110;
    patterns[83][6] = 0b01100110;
    patterns[83][7] = 0b00111100;
    patterns[84][0] = 0b00000000;
    patterns[84][1] = 0b01111110;
    patterns[84][2] = 0b01011010;
    patterns[84][3] = 0b00011000;
    patterns[84][4] = 0b00011000;
    patterns[84][5] = 0b00011000;
    patterns[84][6] = 0b00011000;
    patterns[84][7] = 0b00011000;
    patterns[85][0] = 0b00000000;
    patterns[85][1] = 0b01100110;
    patterns[85][2] = 0b01100110;
    patterns[85][3] = 0b01100110;
    patterns[85][4] = 0b01100110;
    patterns[85][5] = 0b01100110;
    patterns[85][6] = 0b01100110;
    patterns[85][7] = 0b00111110;
    patterns[86][0] = 0b00000000;
    patterns[86][1] = 0b01100110;
    patterns[86][2] = 0b01100110;
    patterns[86][3] = 0b01100110;
    patterns[86][4] = 0b01100110;
    patterns[86][5] = 0b01100110;
    patterns[86][6] = 0b00111100;
    patterns[86][7] = 0b00011000;
    patterns[87][0] = 0b00000000;
    patterns[87][1] = 0b01100011;
    patterns[87][2] = 0b01100011;
    patterns[87][3] = 0b01100011;
    patterns[87][4] = 0b01101011;
    patterns[87][5] = 0b01111111;
    patterns[87][6] = 0b01110111;
    patterns[87][7] = 0b01100011;
    patterns[88][0] = 0b00000000;
    patterns[88][1] = 0b01100011;
    patterns[88][2] = 0b01100011;
    patterns[88][3] = 0b00110110;
    patterns[88][4] = 0b00011100;
    patterns[88][5] = 0b00110110;
    patterns[88][6] = 0b01100011;
    patterns[88][7] = 0b01100011;
    patterns[89][0] = 0b00000000;
    patterns[89][1] = 0b01100110;
    patterns[89][2] = 0b01100110;
    patterns[89][3] = 0b01100110;
    patterns[89][4] = 0b00111100;
    patterns[89][5] = 0b00011000;
    patterns[89][6] = 0b00011000;
    patterns[89][7] = 0b00011000;
    patterns[90][0] = 0b00000000;
    patterns[90][1] = 0b01111110;
    patterns[90][2] = 0b00000110;
    patterns[90][3] = 0b00001100;
    patterns[90][4] = 0b00011000;
    patterns[90][5] = 0b00110000;
    patterns[90][6] = 0b01100000;
    patterns[90][7] = 0b01111110;
    patterns[91][0] = 0b00000000;
    patterns[91][1] = 0b00011110;
    patterns[91][2] = 0b00011000;
    patterns[91][3] = 0b00011000;
    patterns[91][4] = 0b00011000;
    patterns[91][5] = 0b00011000;
    patterns[91][6] = 0b00011000;
    patterns[91][7] = 0b00011110;
    patterns[92][0] = 0b00000000;
    patterns[92][1] = 0b01000000;
    patterns[92][2] = 0b01100000;
    patterns[92][3] = 0b00110000;
    patterns[92][4] = 0b00011000;
    patterns[92][5] = 0b00001100;
    patterns[92][6] = 0b00000110;
    patterns[92][7] = 0b00000010;
    patterns[93][0] = 0b00000000;
    patterns[93][1] = 0b01111000;
    patterns[93][2] = 0b00011000;
    patterns[93][3] = 0b00011000;
    patterns[93][4] = 0b00011000;
    patterns[93][5] = 0b00011000;
    patterns[93][6] = 0b00011000;
    patterns[93][7] = 0b01111000;
    patterns[94][0] = 0b00000000;
    patterns[94][1] = 0b00001000;
    patterns[94][2] = 0b00010100;
    patterns[94][3] = 0b00100010;
    patterns[94][4] = 0b00000000;
    patterns[94][5] = 0b00000000;
    patterns[94][6] = 0b00000000;
    patterns[94][7] = 0b00000000;
    patterns[95][0] = 0b00000000;
    patterns[95][1] = 0b00000000;
    patterns[95][2] = 0b00000000;
    patterns[95][3] = 0b00000000;
    patterns[95][4] = 0b00000000;
    patterns[95][5] = 0b00000000;
    patterns[95][6] = 0b00000000;
    patterns[95][7] = 0b01111110;
    patterns[96][0] = 0b00100000;
    patterns[96][1] = 0b00010000;
    patterns[96][2] = 0b00001000;
    patterns[96][3] = 0b00000000;
    patterns[96][4] = 0b00000000;
    patterns[96][5] = 0b00000000;
    patterns[96][6] = 0b00000000;
    patterns[96][7] = 0b00000000;
    patterns[97][0] = 0b00000000;
    patterns[97][1] = 0b00000000;
    patterns[97][2] = 0b00000000;
    patterns[97][3] = 0b00111100;
    patterns[97][4] = 0b00000110;
    patterns[97][5] = 0b00111110;
    patterns[97][6] = 0b01100110;
    patterns[97][7] = 0b00111110;
    patterns[98][0] = 0b00000000;
    patterns[98][1] = 0b01100000;
    patterns[98][2] = 0b01100000;
    patterns[98][3] = 0b01100000;
    patterns[98][4] = 0b01111100;
    patterns[98][5] = 0b01100110;
    patterns[98][6] = 0b01100110;
    patterns[98][7] = 0b01111100;
    patterns[99][0] = 0b00000000;
    patterns[99][1] = 0b00000000;
    patterns[99][2] = 0b00000000;
    patterns[99][3] = 0b00111100;
    patterns[99][4] = 0b01100110;
    patterns[99][5] = 0b01100000;
    patterns[99][6] = 0b01100110;
    patterns[99][7] = 0b00111100;
    patterns[100][0] = 0b00000000;
    patterns[100][1] = 0b00000110;
    patterns[100][2] = 0b00000110;
    patterns[100][3] = 0b00000110;
    patterns[100][4] = 0b00111110;
    patterns[100][5] = 0b01100110;
    patterns[100][6] = 0b01100110;
    patterns[100][7] = 0b00111110;
    patterns[101][0] = 0b00000000;
    patterns[101][1] = 0b00000000;
    patterns[101][2] = 0b00000000;
    patterns[101][3] = 0b00111100;
    patterns[101][4] = 0b01100110;
    patterns[101][5] = 0b01111110;
    patterns[101][6] = 0b01100000;
    patterns[101][7] = 0b00111100;
    patterns[102][0] = 0b00000000;
    patterns[102][1] = 0b00011100;
    patterns[102][2] = 0b00110110;
    patterns[102][3] = 0b00110000;
    patterns[102][4] = 0b00110000;
    patterns[102][5] = 0b01111100;
    patterns[102][6] = 0b00110000;
    patterns[102][7] = 0b00110000;
    patterns[103][0] = 0b00000000;
    patterns[103][1] = 0b00000000;
    patterns[103][2] = 0b00111110;
    patterns[103][3] = 0b01100110;
    patterns[103][4] = 0b01100110;
    patterns[103][5] = 0b00111110;
    patterns[103][6] = 0b00000110;
    patterns[103][7] = 0b00111100;
    patterns[104][0] = 0b00000000;
    patterns[104][1] = 0b01100000;
    patterns[104][2] = 0b01100000;
    patterns[104][3] = 0b01100000;
    patterns[104][4] = 0b01111100;
    patterns[104][5] = 0b01100110;
    patterns[104][6] = 0b01100110;
    patterns[104][7] = 0b01100110;
    patterns[105][0] = 0b00000000;
    patterns[105][1] = 0b00000000;
    patterns[105][2] = 0b00011000;
    patterns[105][3] = 0b00000000;
    patterns[105][4] = 0b00011000;
    patterns[105][5] = 0b00011000;
    patterns[105][6] = 0b00011000;
    patterns[105][7] = 0b00111100;
    patterns[106][0] = 0b00000000;
    patterns[106][1] = 0b00001100;
    patterns[106][2] = 0b00000000;
    patterns[106][3] = 0b00001100;
    patterns[106][4] = 0b00001100;
    patterns[106][5] = 0b01101100;
    patterns[106][6] = 0b01101100;
    patterns[106][7] = 0b00111000;
    patterns[107][0] = 0b00000000;
    patterns[107][1] = 0b01100000;
    patterns[107][2] = 0b01100000;
    patterns[107][3] = 0b01100110;
    patterns[107][4] = 0b01101100;
    patterns[107][5] = 0b01111000;
    patterns[107][6] = 0b01101100;
    patterns[107][7] = 0b01100110;
    patterns[108][0] = 0b00000000;
    patterns[108][1] = 0b00011000;
    patterns[108][2] = 0b00011000;
    patterns[108][3] = 0b00011000;
    patterns[108][4] = 0b00011000;
    patterns[108][5] = 0b00011000;
    patterns[108][6] = 0b00011000;
    patterns[108][7] = 0b00011000;
    patterns[109][0] = 0b00000000;
    patterns[109][1] = 0b00000000;
    patterns[109][2] = 0b00000000;
    patterns[109][3] = 0b01100011;
    patterns[109][4] = 0b01110111;
    patterns[109][5] = 0b01111111;
    patterns[109][6] = 0b01101011;
    patterns[109][7] = 0b01101011;
    patterns[110][0] = 0b00000000;
    patterns[110][1] = 0b00000000;
    patterns[110][2] = 0b00000000;
    patterns[110][3] = 0b01111100;
    patterns[110][4] = 0b01111110;
    patterns[110][5] = 0b01100110;
    patterns[110][6] = 0b01100110;
    patterns[110][7] = 0b01100110;
    patterns[111][0] = 0b00000000;
    patterns[111][1] = 0b00000000;
    patterns[111][2] = 0b00000000;
    patterns[111][3] = 0b00111100;
    patterns[111][4] = 0b01100110;
    patterns[111][5] = 0b01100110;
    patterns[111][6] = 0b01100110;
    patterns[111][7] = 0b00111100;
    patterns[112][0] = 0b00000000;
    patterns[112][1] = 0b00000000;
    patterns[112][2] = 0b01111100;
    patterns[112][3] = 0b01100110;
    patterns[112][4] = 0b01100110;
    patterns[112][5] = 0b01111100;
    patterns[112][6] = 0b01100000;
    patterns[112][7] = 0b01100000;
    patterns[113][0] = 0b00000000;
    patterns[113][1] = 0b00000000;
    patterns[113][2] = 0b00111100;
    patterns[113][3] = 0b01101100;
    patterns[113][4] = 0b01101100;
    patterns[113][5] = 0b00111100;
    patterns[113][6] = 0b00001101;
    patterns[113][7] = 0b00001111;
    patterns[114][0] = 0b00000000;
    patterns[114][1] = 0b00000000;
    patterns[114][2] = 0b00000000;
    patterns[114][3] = 0b01111100;
    patterns[114][4] = 0b01100110;
    patterns[114][5] = 0b01100110;
    patterns[114][6] = 0b01100000;
    patterns[114][7] = 0b01100000;
    patterns[115][0] = 0b00000000;
    patterns[115][1] = 0b00000000;
    patterns[115][2] = 0b00000000;
    patterns[115][3] = 0b00111110;
    patterns[115][4] = 0b01000000;
    patterns[115][5] = 0b00111100;
    patterns[115][6] = 0b00000010;
    patterns[115][7] = 0b01111100;
    patterns[116][0] = 0b00000000;
    patterns[116][1] = 0b00000000;
    patterns[116][2] = 0b00011000;
    patterns[116][3] = 0b00011000;
    patterns[116][4] = 0b01111110;
    patterns[116][5] = 0b00011000;
    patterns[116][6] = 0b00011000;
    patterns[116][7] = 0b00011000;
    patterns[117][0] = 0b00000000;
    patterns[117][1] = 0b00000000;
    patterns[117][2] = 0b00000000;
    patterns[117][3] = 0b01100110;
    patterns[117][4] = 0b01100110;
    patterns[117][5] = 0b01100110;
    patterns[117][6] = 0b01100110;
    patterns[117][7] = 0b00111110;
    patterns[118][0] = 0b00000000;
    patterns[118][1] = 0b00000000;
    patterns[118][2] = 0b00000000;
    patterns[118][3] = 0b00000000;
    patterns[118][4] = 0b01100110;
    patterns[118][5] = 0b01100110;
    patterns[118][6] = 0b00111100;
    patterns[118][7] = 0b00011000;
    patterns[119][0] = 0b00000000;
    patterns[119][1] = 0b00000000;
    patterns[119][2] = 0b00000000;
    patterns[119][3] = 0b01100011;
    patterns[119][4] = 0b01101011;
    patterns[119][5] = 0b01101011;
    patterns[119][6] = 0b01101011;
    patterns[119][7] = 0b00111110;
    patterns[120][0] = 0b00000000;
    patterns[120][1] = 0b00000000;
    patterns[120][2] = 0b00000000;
    patterns[120][3] = 0b01100110;
    patterns[120][4] = 0b00111100;
    patterns[120][5] = 0b00011000;
    patterns[120][6] = 0b00111100;
    patterns[120][7] = 0b01100110;
    patterns[121][0] = 0b00000000;
    patterns[121][1] = 0b00000000;
    patterns[121][2] = 0b00000000;
    patterns[121][3] = 0b01100110;
    patterns[121][4] = 0b01100110;
    patterns[121][5] = 0b00111110;
    patterns[121][6] = 0b00000110;
    patterns[121][7] = 0b00111100;
    patterns[122][0] = 0b00000000;
    patterns[122][1] = 0b00000000;
    patterns[122][2] = 0b00000000;
    patterns[122][3] = 0b00111100;
    patterns[122][4] = 0b00001100;
    patterns[122][5] = 0b00011000;
    patterns[122][6] = 0b00110000;
    patterns[122][7] = 0b00111100;
    patterns[123][0] = 0b00000000;
    patterns[123][1] = 0b00001110;
    patterns[123][2] = 0b00011000;
    patterns[123][3] = 0b00011000;
    patterns[123][4] = 0b00110000;
    patterns[123][5] = 0b00011000;
    patterns[123][6] = 0b00011000;
    patterns[123][7] = 0b00001110;
    patterns[124][0] = 0b00000000;
    patterns[124][1] = 0b00011000;
    patterns[124][2] = 0b00011000;
    patterns[124][3] = 0b00011000;
    patterns[124][4] = 0b00011000;
    patterns[124][5] = 0b00011000;
    patterns[124][6] = 0b00011000;
    patterns[124][7] = 0b00011000;
    patterns[125][0] = 0b00000000;
    patterns[125][1] = 0b01110000;
    patterns[125][2] = 0b00011000;
    patterns[125][3] = 0b00011000;
    patterns[125][4] = 0b00001100;
    patterns[125][5] = 0b00011000;
    patterns[125][6] = 0b00011000;
    patterns[125][7] = 0b01110000;
    patterns[126][0] = 0b00000000;
    patterns[126][1] = 0b00000000;
    patterns[126][2] = 0b00000000;
    patterns[126][3] = 0b00111010;
    patterns[126][4] = 0b01101100;
    patterns[126][5] = 0b00000000;
    patterns[126][6] = 0b00000000;
    patterns[126][7] = 0b00000000;
    patterns[127][0] = 0b11111111;
    patterns[127][1] = 0b11111111;
    patterns[127][2] = 0b11111111;
    patterns[127][3] = 0b11111111;
    patterns[127][4] = 0b11111111;
    patterns[127][5] = 0b11111111;
    patterns[127][6] = 0b11111111;
    patterns[127][7] = 0b11111111;
}
