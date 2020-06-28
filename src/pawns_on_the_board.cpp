#include "chessviz.h"
#include <iostream>
using namespace std;

void Move_pawn(char chessviz[9][9], int c[][2])
{
    char temp;
    if (c[0][0] == c[1][0])
        if (((chessviz[c[0][1]][c[0][0]] == 'P')
             && ((c[1][1] == c[0][1] - 1) || (c[1][1] == c[0][1] - 2)))
            || ((chessviz[c[0][1]][c[0][0]] == 'p')
                && ((c[1][1] == c[0][1] + 1) || (c[1][1] == (c[0][1] + 2))))) {
            temp = chessviz[c[0][1]][c[0][0]];
            chessviz[c[0][1]][c[0][0]] = chessviz[c[1][1]][c[1][0]];
            chessviz[c[1][1]][c[1][0]] = temp;
        }
}
