#ifndef board_h
#define board_h
#include <iostream>
using namespace std;

void Print_board(char chessviz[][9]);
void Check(string pawn_move, int c[][2]);
void Move_pawn(char chessviz[9][9], int c[][2]);

#endif
