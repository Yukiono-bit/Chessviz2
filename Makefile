all: lounch
comp:	Chessviz.cpp
	gcc -Wall -o Chessviz Chessviz.cpp
lounch: comp
	./Chessviz
