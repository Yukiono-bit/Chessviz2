#include "chessviz.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    char chessviz[9][9]
            = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
               {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    return 0;
}
