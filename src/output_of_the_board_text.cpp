#include "chessviz.h"
#include <iostream>
using namespace std;

void Print_board(char chessviz[][9])
{
    cout << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << chessviz[i][j] << " ";
        }
        cout << endl;
    }
}
