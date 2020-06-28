g = g++
CFLAGS = -Wall -Werror -MP -MMD

.PHONY: clean run all

all: 		./bin/pawn_move.exe

-include build/*.d

./bin/pawn_move.exe: ./build/main.o ./build/output_of_the_board_text.o ./build/pawn_move.o ./build/pawns_on_the_board.o
		$(g) $(CFLAGS) -o ./bin/pawn_move ./build/main.o ./build/pawn_move.o ./build/output_of_the_board_text.o ./build/pawns_on_the_board.o

./build/main.o: ./src/main.cpp ./src/chessviz.h
		$(g) $(CFLAGS) -o build/main.o -c src/main.cpp

./build/output_of_the_board_text.o: ./src/output_of_the_board_text.cpp ./src/chessviz.h
		$(g) $(CFLAGS) -o ./build/output_of_the_board_text.o -c src/output_of_the_board_text.cpp

./build/pawn_move.o: ./src/pawn_move.cpp ./src/chessviz.h
		$(g) $(CFLAGS) -o ./build/pawn_move.o -c ./src/pawn_move.cpp

./build/pawns_on_the_board.o: ./src/pawns_on_the_board.cpp ./src/chessviz.h
		$(g) $(CFLAGS) -o ./build/pawns_on_the_board.o -c ./src/pawns_on_the_board.cpp

clean:
		rm -rf build/*.o build/*.d

run:
		./bin/pawn_move
