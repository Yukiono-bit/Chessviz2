#include "chessviz.h"
#include <iostream>
using namespace std;

void Check(string pawn_move, int c[][2])
{
    int errorCheck = 1;
    while (errorCheck) {
        cout « endl « "Сделайте ход: ";
        cin » pawn_move;
        switch (pawn_move[0]) {
        case 'a':
            c[0][0] = 1;
            break;
        case 'b':
            c[0][0] = 2;
            break;
        case 'c':
            c[0][0] = 3;
            break;
        case 'd':
            c[0][0] = 4;
            break;
        case 'e':
            c[0][0] = 5;
            break;
        case 'f':
            c[0][0] = 6;
            break;
        case 'g':
            c[0][0] = 7;
            break;
        case 'h':
            c[0][0] = 8;
            break;
        default:
            cout « "Ошибка";
            errorCheck = 0;
        }

        if (errorCheck == 1)
            switch (pawn_move[1]) {
            case '1':
                c[0][1] = 7;
                break;
            case '2':
                c[0][1] = 6;
                break;
            case '3':
                c[0][1] = 5;
                break;
            case '4':
                c[0][1] = 4;
                break;
            case '5':
                c[0][1] = 3;
                break;
            case '6':
                c[0][1] = 2;
                break;
            case '7':
                c[0][1] = 1;
                break;
            case '8':
                c[0][1] = 0;
                break;
            default:
                cout « "Ошибка";
                errorCheck = 0;
            }

        if (errorCheck == 1)
            if (pawn_move[2] != '-') {
                cout « "Ошибка";
                errorCheck = 0;
            }

        if (errorCheck == 1)
            switch (pawn_move[3]) {
            case 'a':
                c[1][0] = 1;
                break;
            case 'b':
                c[1][0] = 2;
                break;
            case 'c':
                c[1][0] = 3;
                break;
            case 'd':
                c[1][0] = 4;
                break;
            case 'e':
                c[1][0] = 5;
                break;
            case 'f':
                c[1][0] = 6;
                break;
            case 'g':
                c[1][0] = 7;
                break;
            case 'h':
                c[1][0] = 8;
                break;
            default:
                cout « "Ошибка";
                errorCheck = 0;
            }

        if (errorCheck == 1)
            switch (pawn_move[4]) {
            case '1':
                c[1][1] = 7;
                break;
            case '2':
                c[1][1] = 6;
                break;
            case '3':
                c[1][1] = 5;
                break;
            case '4':
                c[1][1] = 4;
                break;
            case '5':
                c[1][1] = 3;
                break;
            case '6':
                c[1][1] = 2;
                break;
            case '7':
                c[1][1] = 1;
                break;
            case '8':
                c[1][1] = 0;
                break;
            default:
                cout « "Ошибка";
                errorCheck = 0;
            }
        errorCheck = 0;
    }
}
