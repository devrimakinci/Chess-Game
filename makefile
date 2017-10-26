all: ChessGame

ChessGame: ChessGame.o
	gcc ChessGame.o -o ChessGame

main.o :ChessGame.c
	gcc -c -ansi -pedantic-errors ChessGame.c
	
clean:
	rm *.o ChessGame
