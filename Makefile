all: lounch
comp:	Chessviz.cpp
	g++ -Wall -o Chessviz Chessviz.cpp
lounch: comp
	./Chessviz
