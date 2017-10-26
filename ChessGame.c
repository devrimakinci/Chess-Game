/*----------------------------------------------------------------------------*/
/*   Chess Game                                                               */
/*                                                                            */
/* -------------                                                              */
/* Adi:Devrim                                                                 */
/* Soyadi:Akıncı	                                                          */
/* Numarasi: 141044052	   												      */ 
/* Tarih:22/04/2016                                                           */
/*                                                                            */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*								Includes									  */
/*----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 8
#define FAIL 0 /*    Fonksiyonun basarisiz oldugunda dondurecegi deger        */
#define SUCCESS 1/*    Fonksiyonun basarili oldugunda dondurecegi deger       */

/*----------------------------------------------------------------------------*/
/*						  Fonksiyon Prototipleri    						  */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* void getPosition (char *col, int *row)                                     */
/* ------------------    													  */
/*        col ---> Satranc tahtasinin sutun degeri                            */
/*        row ---> Satranc tahtasinin satir degeri                            */  
/*																			  */
/* Tanim																	  */
/* ------------     														  */
/*     Bu fonksiyon kullanicidan satir ve sutun degerlerini alir.             */
/*                                                                            */
/*----------------------------------------------------------------------------*/

void getPosition (char *col, int *row);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* void initBoard (char *board)                                               */
/* --------------															  */
/*        board ---> Satranc tahtasi                                          */ 
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon taslarin satrans tahtasi uzerinde                         */
/*     baslangic pozisyonuna ayarlar.                                         */
/*                                                                            */
/*----------------------------------------------------------------------------*/

void initBoard (char *board);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* void printBoard (char *board)                                              */
/* --------------															  */
/*        board ---> Satranc tahtasi                                          */ 
/*																			  */
/* Tanim										     						  */
/* ------------     														  */
/*     Bu fonksiyon satranc tahtasini ekrana basar.                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/

void printBoard (char *board);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isValidCell (char col, int row)                                        */
/* ------------------    													  */
/*        col ---> Satranc tahtasinin sutun degeri                            */
/*        row ---> Satranc tahtasinin satir degeri                            */  
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon kullanicidan aldigi sutun ve satir degerlerini            */
/*     satranc tahtasi uzerinde olup olmadigini kontrol eder.                 */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int isValidCell (char col, int row);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* char getPlayer (char *board, char column, int rows)                        */
/* ------------------    													  */
/*		  board ---> Satranc tahtasi                                          */
/*        col ---> Satranc tahtasinin sutun degeri                            */
/*        row ---> Satranc tahtasinin satir degeri                            */  
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon kullanicidan sutun ve satir degerlerini                   */
/*     alir vesatranc tahtasinda tas olup olmadigini kontrol eder             */
/*                                                                            */
/*----------------------------------------------------------------------------*/

char getPlayer (char *board, char column, int rows);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isBlack (char currPlayer)                                              */
/* ------------------    													  */
/*        currPlayer ---> Satranc tahtasi uzerinde secilmis olan tas          */
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon satranc tasinin siyah olup olmadigini kontrol eder        */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int isBlack (char currPlayer);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isWhite (char currPlayer)                                              */
/* ------------------    													  */
/*        currPlayer ---> Satranc tahtasi uzerinde secilmis olan tas          */
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon satranc tasinin beyaz olup olmadigini kontrol eder        */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int isWhite (char currPlayer);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int makeMove (char *board, char sc, int sr, char tc, int tr)               */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */
/*		  sc ---> Secilen tasin sutun degeri				     			  */
/*		  sr ---> Secilen tasin satir degeri				     			  */
/*		  tc ---> Gidilecek yerin sutun degeri					         	  */
/*		  tr ---> Gidilecek yerin satir degeri 		    			          */ 
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon satranc tasinin satranc tahtasi uzerinde hareket          */
/*     etmesini saglar                                                        */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int makeMove(char *board, char sc, int sr, char tc, int tr);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isInCheck (char *board)                                                */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */ 
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon beyaz veya siyah sah tasinin tehdit altinda olup          */
/*     olmadigini kontrol eder                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int isInCheck(char* board);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isKingCheckToKing (char *board)                                        */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */ 
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon sah tasinin rakip sah tasina sah cekip cekmedigini        */
/*     kontrol eder                                                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int isKingCheckToKing (char *board);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int kingDownEmpty (char *board,int target, int loc)                        */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */ 
/*        target ---> Sah tasinin bulundugu konum                             */
/*        loc ---> Tehdit eden tasin bulundugu konum                          */
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon sah ile sahi tehdit eden tas arasindaki                   */
/*     asagidaki karelerin (sahin konumuna gore) bos olup olmadigini          */
/*     kontrol eder                                                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int kingDownEmpty (char* board,int target,int loc);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int kingRightDownCrossEmpty (char *board,int target, int loc)              */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */ 
/*        target ---> Sah tasinin bulundugu konum                             */
/*        loc ---> Tehdit eden tasin bulundugu konum                          */
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon sah ile sahi tehdit eden tas arasindaki                   */
/*     sag capraz asagidaki karelerin (sahin konumuna gore) bos olup          */
/*     olmadigini kontrol eder                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int kingRightDownCrossEmpty (char* board,int target,int loc);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int kingLeftDownCrossEmpty (char *board,int target, int loc)               */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */ 
/*        target ---> Sah tasinin bulundugu konum                             */
/*        loc ---> Tehdit eden tasin bulundugu konum                          */
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon sah ile sahi tehdit eden tas arasindaki                   */
/*     sol capraz asagidaki karelerin (sahin konumuna gore) bos olup          */
/*     olmadigini kontrol eder                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int kingLeftDownCrossEmpty (char* board,int target,int loc);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int kingUpEmpty (char *board,int target, int loc)                          */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */ 
/*        target ---> Sah tasinin bulundugu konum                             */
/*        loc ---> Tehdit eden tasin bulundugu konum                          */
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon sah ile sahi tehdit eden tas arasindaki                   */
/*     yukaridaki karelerin (sahin konumuna gore) bos olup olmadigini         */
/*     kontrol eder                                                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int kingUpEmpty (char* board,int target,int loc);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int kingRightEmpty (char *board,int target, int loc)                       */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */ 
/*        target ---> Sah tasinin bulundugu konum                             */
/*        loc ---> Tehdit eden tasin bulundugu konum                          */
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon sah ile sahi tehdit eden tas arasindaki                   */
/*     sagdaki karelerin (sahin konumuna gore) bos olup olmadigini            */
/*     kontrol eder                                                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int kingRightEmpty (char* board,int target,int loc);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int kingLeftEmpty (char *board,int target, int loc)                        */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */ 
/*        target ---> Sah tasinin bulundugu konum                             */
/*        loc ---> Tehdit eden tasin bulundugu konum                          */
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon sah ile sahi tehdit eden tas arasindaki                   */
/*     soldaki karelerin (sahin konumuna gore) bos olup olmadigini            */
/*     kontrol eder                                                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int kingLeftEmpty (char* board,int target,int loc);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int kingRightUpCrossEmpty (char *board,int target, int loc)                */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */ 
/*        target ---> Sah tasinin bulundugu konum                             */
/*        loc ---> Tehdit eden tasin bulundugu konum                          */
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon sah ile sahi tehdit eden tas arasindaki                   */
/*     sag capraz yukaridaki karelerin (sahin konumuna gore) bos olup         */
/*     olmadigini kontrol eder                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int kingRightUpCrossEmpty (char* board,int target,int loc);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int kingLeftUpCrossEmpty (char *board,int target, int loc)                 */
/* ------------------    													  */
/*        board ---> Satranc tahtasi                                          */ 
/*        target ---> Sah tasinin bulundugu konum                             */
/*        loc ---> Tehdit eden tasin bulundugu konum                          */
/*																			  */
/* Tanim																      */
/* ------------     														  */
/*     Bu fonksiyon sah ile sahi tehdit eden tas arasindaki                   */
/*     sol capraz yukaridaki karelerin (sahin konumuna gore) bos olup         */
/*     olmadigini kontrol eder                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int kingLeftUpCrossEmpty (char* board,int target,int loc);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isPieceMovable (char *board,char sc,int sr,char tc,int tr)             */
/* --------------															  */
/*        board ---> Satranc tahtasi                                          */
/*		  sc ---> Secilen tasin sutun degeri				     			  */
/*		  sr ---> Secilen tasin satir degeri				     			  */
/*		  tc ---> Gidilecek yerin sutun degeri					         	  */
/*		  tr ---> Gidilecek yerin satir degeri 		    			          */
/*																			  */
/* Tanim   																	  */
/* ------------     														  */
/*     Bu fonksiyon satranc taslarinin hareket edebilirligini kontrol eder.   */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int isPieceMovable(char *board,char sc,int sr,char tc,int tr);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isKnightMovable(char *board,char sc,int sr,char tc,int tr)             */
/* --------------															  */
/*        board ---> Satranc tahtasi                                          */
/*		  sc ---> Secilen tasin sutun degeri				     			  */
/*		  sr ---> Secilen tasin satir degeri				     			  */
/*		  tc ---> Gidilecek yerin sutun degeri					         	  */
/*		  tr ---> Gidilecek yerin satir degeri 		    			          */
/* Tanim																	  */
/* ------------     														  */
/*     Bu fonksiyon at tasinin hareketini yapar.                              */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int isKnightMovable(char *board,char sc,int sr,char tc,int tr);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isQueenMovable(char *board,char sc,int sr,char tc,int tr)              */
/* --------------															  */
/*        board ---> Satranc tahtasi                                          */
/*		  sc ---> Secilen tasin sutun degeri				     			  */
/*		  sr ---> Secilen tasin satir degeri				     			  */
/*		  tc ---> Gidilecek yerin sutun degeri					         	  */
/*		  tr ---> Gidilecek yerin satir degeri 		    			          */
/* Tanim																	  */
/* ------------     														  */
/*     Bu fonksiyon vezir tasinin hareketini yapar.                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int isQueenMovable(char *board,char sc,int sr,char tc,int tr);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isPawnMovable(char *board,char sc,int sr,char tc,int tr)               */
/* --------------															  */
/*        board ---> Satranc tahtasi                                          */
/*		  sc ---> Secilen tasin sutun degeri				     			  */
/*		  sr ---> Secilen tasin satir degeri				     			  */
/*		  tc ---> Gidilecek yerin sutun degeri					         	  */
/*		  tr ---> Gidilecek yerin satir degeri 		    			          */
/* Tanim																	  */
/* ------------     														  */
/*     Bu fonksiyon piyon tasinin hareketini yapar.                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int isPawnMovable(char *board,char sc,int sr,char tc,int tr);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isRookMovable(char *board,char sc,int sr,char tc,int tr)               */
/* --------------															  */
/*        board ---> Satranc tahtasi                                          */
/*		  sc ---> Secilen tasin sutun degeri				     			  */
/*		  sr ---> Secilen tasin satir degeri				     			  */
/*		  tc ---> Gidilecek yerin sutun degeri					         	  */
/*		  tr ---> Gidilecek yerin satir degeri 		    			          */
/* Tanim																	  */
/* ------------     														  */
/*     Bu fonksiyon kale tasinin hareketini yapar.                            */
/*----------------------------------------------------------------------------*/

int isRookMovable(char *board,char sc,int sr,char tc,int tr);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isBishopMovable(char *board,char sc,int sr,char tc,int tr)             */
/* --------------															  */
/*        board ---> Satranc tahtasi                                          */
/*		  sc ---> Secilen tasin sutun degeri				     			  */
/*		  sr ---> Secilen tasin satir degeri				     			  */
/*		  tc ---> Gidilecek yerin sutun degeri					         	  */
/*		  tr ---> Gidilecek yerin satir degeri 		    			          */
/*																			  */
/* Tanim																  	  */
/* ------------     														  */
/*     Bu fonksiyon fil tasinin hareketini yapar.                             */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int isBishopMovable(char *board,char sc,int sr,char tc,int tr);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int isKingMovable(char *board,char sc,int sr,char tc,int tr)               */
/* --------------															  */
/*        board ---> Satranc tahtasi                                          */
/*		  sc ---> Secilen tasin sutun degeri				     			  */
/*		  sr ---> Secilen tasin satir degeri				     			  */
/*		  tc ---> Gidilecek yerin sutun degeri					         	  */
/*		  tr ---> Gidilecek yerin satir degeri 		    			          */
/*																			  */
/* Tanim																  	  */
/* ------------     														  */
/*     Bu fonksiyon sah tasinin hareketini yapar.                             */
/*----------------------------------------------------------------------------*/

int isKingMovable(char *board,char sc,int sr,char tc,int tr);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int colSearch(char *arr,int size,char item)                                */
/* --------------															  */
/*        arr ---> Satranc tahtasinin sutun degerlerini iceren array          */
/*		  size ---> Arrayin boyutunun degeri     							  */
/*		  item ---> Arrayin icinde aranacak deger	     					  */ 
/*																			  */
/* Tanim																  	  */
/* ------------     														  */
/*     Bu fonksiyon aranacak degerin array icinde olup olmadigini             */
/*     kontrol eder eger varsa degerin indeksini dondurur yok ise             */
/*     sifir dondurur.                                                        */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int colSearch (char *arr, int size, char item);

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* int rowSearch(char *arr,int size,char item)                                */
/* --------------															  */
/*        arr ---> Satranc tahtasinin satir degerlerini iceren array          */
/*		  size ---> Arrayin boyutunun degeri     							  */
/*		  item ---> Arrayin icinde aranacak deger	     					  */ 
/*																			  */
/* Tanim																  	  */
/* ------------     														  */
/*     Bu fonksiyon aranacak degerin array icinde olup olmadigini             */
/*     kontrol eder eger varsa degerin indeksini dondurur yok ise             */
/*     sifir dondurur.                                                        */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int rowSearch (int *arr, int size, int item);

int main() 
{
    char board [BOARD_SIZE*BOARD_SIZE], empty;
    int player = 1; /* 1 white, 0 black */
    char sc,tc; /* source/target cols */
    int sr,tr; /* source/target rows */
    int moveStatus = 0;
    int checkStatus = 0;
    char currPlayer;

    initBoard(board);

    do {
        printBoard(board);
        printf("%s player move > ", player ? "White" : "Black");
        getPosition(&sc,&sr);
        scanf("%c", &empty);
        getPosition(&tc,&tr);
        scanf("%c", &empty);
        currPlayer = getPlayer(board, sc,sr);

        if(!isValidCell(sc,sr)) {
            printf("Source position is invalid\n");
            continue;
        }
        if(!isValidCell(tc,tr)) {
            printf("Target position is invalid\n");
            continue;
        }
        if((isBlack(currPlayer) && player) ||
           (isWhite(currPlayer) && !player)) {
            printf("Illegal piece. \n");
            continue;
        }

        moveStatus = makeMove(board,sc,sr,tc,tr);
        switch(moveStatus) {
            case 0:
                printf("Invalid move!\n");
                break;
            case 1:
                printf("Your king is in check!\n");
                ++checkStatus;
                break;
            case 3:
                printf("Check!\n ");
            case 2:
                player = !player;
                checkStatus = 0;
                break;
        }
    } while(checkStatus < 2);
    printf("%s player WINS!\n", player ? "Black" : "White");
    return 0;
}

void getPosition (char *col, int *row)
{
	scanf (" %c",col);
	scanf ("%d",row);
}

int isValidCell (char col, int row)
{
	if ((col>='a' && col<='h') && (1<=row && row<=8))
		return (SUCCESS);
	return (FAIL);	
}

char getPlayer (char *board, char column, int rows)
{
	char col [BOARD_SIZE]={'a','b','c','d','e','f','g','h'},player;
	int row [BOARD_SIZE]={8,7,6,5,4,3,2,1},playerX,playerY,playerLoc;
	playerX=rowSearch(row,BOARD_SIZE,rows); /*Oyuncunu bulundugu satir degeri */
	playerY=colSearch(col,BOARD_SIZE,column);/*Oyuncunu bulundugu sutun degeri*/
/*--------------Oyuncunun satranc tahtasi uzerinde bulundugu konumu-----------*/
	playerLoc=(playerX*BOARD_SIZE)+playerY;
/*----------------------------------------------------------------------------*/
	player=board[playerLoc];
	return player;
}

int isBlack (char currPlayer)
{
	if ((currPlayer=='r')||(currPlayer=='n')||(currPlayer=='b')||
		(currPlayer=='q')||(currPlayer=='k')||(currPlayer=='p'))
		return SUCCESS;
	return FAIL;
}

int isWhite (char currPlayer)
{
	if ((currPlayer=='R')||(currPlayer=='N')||(currPlayer=='B')||
		(currPlayer=='Q')||(currPlayer=='K')||(currPlayer=='P'))
		return SUCCESS;
	return FAIL;
}

int isKnightMovable(char *board,char sc,int sr,char tc,int tr)
{
	char col [BOARD_SIZE]={'a','b','c','d','e','f','g','h'};
	int row [BOARD_SIZE]={8,7,6,5,4,3,2,1},sourceX,sourceY,targetX,targetY;
/*-----------Satranc tahtasinin icine erismek icin yapilan islemler-----------*/
	sourceX=rowSearch (row,BOARD_SIZE,sr);
	sourceY=colSearch (col,BOARD_SIZE,sc);
	targetX=rowSearch (row,BOARD_SIZE,tr);
	targetY=colSearch (col,BOARD_SIZE,tc);
/*----------------------------------------------------------------------------*/
/*----------------At tasinin hareketinin butun olasiliklari-------------------*/
	if (((targetX==sourceX+2) && (targetY==sourceY+1)) ||
	((targetX==sourceX-2) && (targetY==sourceY+1)) ||
	((targetX==sourceX+2) && (targetY==sourceY-1)) ||
	((targetX==sourceX-2) && (targetY==sourceY-1)) ||
	((targetX==sourceX+1) && (targetY==sourceY+2)) ||
	((targetX==sourceX-1) && (targetY==sourceY+2)) ||
	((targetX==sourceX+1) && (targetY==sourceY-2)) ||
	((targetX==sourceX-1) && (targetY==sourceY-2)))
/*----------------------------------------------------------------------------*/
		return SUCCESS;
	return FAIL;
}

int isKingMovable(char *board,char sc,int sr,char tc,int tr)
{
	char col [BOARD_SIZE]={'a','b','c','d','e','f','g','h'};
	int row [BOARD_SIZE]={8,7,6,5,4,3,2,1},sourceX,sourceY,targetX,targetY;
/*-----------Satranc tahtasinin icine erismek icin yapilan islemler-----------*/
	sourceX=rowSearch (row,BOARD_SIZE,sr);
	sourceY=colSearch (col,BOARD_SIZE,sc);
	targetX=rowSearch (row,BOARD_SIZE,tr);
	targetY=colSearch (col,BOARD_SIZE,tc);
/*----------------------------------------------------------------------------*/
/*---------------Sah tasinin hareketinin butun olasiliklari-------------------*/
	if (((targetX==sourceX+1) && (targetY==sourceY)) ||
	((targetX==sourceX+1) && (targetY==sourceY+1)) ||
	((targetX==sourceX+1) && (targetY==sourceY-1)) ||
	((targetX==sourceX-1) && (targetY==sourceY)) ||
	((targetX==sourceX-1) && (targetY==sourceY+1)) ||
	((targetX==sourceX-1) && (targetY==sourceY-1)) ||
	((targetX==sourceX) && (targetY==sourceY+1)) ||
	((targetX==sourceX) && (targetY==sourceY-1)))
/*----------------------------------------------------------------------------*/
		return SUCCESS;
	return FAIL;	
}

int isPawnMovable(char *board,char sc,int sr,char tc,int tr)
{
	char col [BOARD_SIZE]={'a','b','c','d','e','f','g','h'};
	int row [BOARD_SIZE]={8,7,6,5,4,3,2,1},sourceX,sourceY,targetX,targetY,src,trgt;
/*-----------Satranc tahtasinin icine erismek icin yapilan islemler-----------*/
	sourceX=rowSearch (row,BOARD_SIZE,sr);
	sourceY=colSearch (col,BOARD_SIZE,sc);
	targetX=rowSearch (row,BOARD_SIZE,tr);
	targetY=colSearch (col,BOARD_SIZE,tc);
	src=(sourceX*BOARD_SIZE)+sourceY;
	trgt=(targetX*BOARD_SIZE)+targetY;
/*----------------------------------------------------------------------------*/
/*-------------Piyon tasinin hareketinin butun olasiliklari-------------------*/
	if ((board[src]=='p') && (board[trgt]==' '))
	{
		if ((targetX==sourceX+1) && (targetY==sourceY))
			return SUCCESS;
	}
	else if ((board[src]=='P') && (board[trgt]==' '))
	{
		if ((targetX==sourceX-1) && (targetY==sourceY))
			return SUCCESS;
	} 
	else if ((board[src]=='p') && (board[trgt]!=' '))
	{
		if(((targetX==sourceX+1) && (targetY==sourceY+1))||
		((targetX==sourceX+1) && (targetY==sourceY-1)))
			return SUCCESS;
	}
	else if ((board[src]=='P') && (board[trgt]!=' '))
	{
		if (((targetX==sourceX-1) && (targetY==sourceY+1)) ||
			((targetX==sourceX-1) && (targetY==sourceY-1)))
				return SUCCESS;
	} 
/*----------------------------------------------------------------------------*/
	return FAIL;
}

int isRookMovable(char *board,char sc,int sr,char tc,int tr)
{
	char col [BOARD_SIZE]={'a','b','c','d','e','f','g','h'};
	int row [BOARD_SIZE]={8,7,6,5,4,3,2,1},sourceX,sourceY,targetX,targetY,i,status;
/*-----------Satranc tahtasinin icine erismek icin yapilan islemler-----------*/
	sourceX=rowSearch (row,BOARD_SIZE,sr);
	sourceY=colSearch (col,BOARD_SIZE,sc);
	targetX=rowSearch (row,BOARD_SIZE,tr);
	targetY=colSearch (col,BOARD_SIZE,tc);
/*----------------------------------------------------------------------------*/
/*--------------Kale tasinin hareketinin butun olasiliklari-------------------*/
	if (targetY==sourceY)
	{
		for (i=0; i<BOARD_SIZE; i++)
		{
/*-----------Kale tasinin yukari veya asagiya hareket etmesi-------------------*/
			if ((targetX==sourceX+i)||(targetX==sourceX-i))
				status=1;
		}
		return (status);
	}
	else if (targetX==sourceX)
	{
		for (i=0; i<BOARD_SIZE; i++)
		{
/*---------------Kale tasinin sola veya saga hareket etmesi-------------------*/
			if ((targetY==sourceY+i)||(targetY==sourceY-i))
				status=1;
		}
		return (status);
	}
/*----------------------------------------------------------------------------*/
	return (FAIL);
}

int isBishopMovable(char *board,char sc,int sr,char tc,int tr)
{
	char col [BOARD_SIZE]={'a','b','c','d','e','f','g','h'};
	int row [BOARD_SIZE]={8,7,6,5,4,3,2,1},sourceX,sourceY,targetX,targetY,i,status;
	status=0;
/*-----------Satranc tahtasinin icine erismek icin yapilan islemler-----------*/
	sourceX=rowSearch (row,BOARD_SIZE,sr);
	sourceY=colSearch (col,BOARD_SIZE,sc);
	targetX=rowSearch (row,BOARD_SIZE,tr);
	targetY=colSearch (col,BOARD_SIZE,tc);
/*----------------------------------------------------------------------------*/
/*---------------Fil tasinin hareketinin butun olasiliklari-------------------*/
	for (i=0; i<BOARD_SIZE; i++)
	{
/*-----------------Fil tasinin capraz olarak hareket etmesi-------------------*/
		if(((targetX==sourceX+i)&&(targetY==sourceY+i))||
		  ((targetX==sourceX+i)&&(targetY==sourceY-i))||
		  ((targetX==sourceX-i)&&(targetY==sourceY+i))||
		  ((targetX==sourceX-i)&&(targetY==sourceY-i)))	
			status=1;
	}
/*----------------------------------------------------------------------------*/
	return (status);
}

int isQueenMovable(char *board,char sc,int sr,char tc,int tr)
{
	char col [BOARD_SIZE]={'a','b','c','d','e','f','g','h'};
	int row [BOARD_SIZE]={8,7,6,5,4,3,2,1},sourceX,sourceY,targetX,targetY,i,status;
	status=0;
/*-----------Satranc tahtasinin icine erismek icin yapilan islemler-----------*/
	sourceX=rowSearch (row,BOARD_SIZE,sr);
	sourceY=colSearch (col,BOARD_SIZE,sc);
	targetX=rowSearch (row,BOARD_SIZE,tr);
	targetY=colSearch (col,BOARD_SIZE,tc);
/*----------------------------------------------------------------------------*/
/*-------------Vezir tasinin hareketinin butun olasiliklari-------------------*/
	if (targetY==sourceY)
	{
		for (i=0; i<BOARD_SIZE; i++)
		{
/*----------Vezir tasinin yukari veya asagiya hareket etmesi-------------------*/
			if ((targetX==sourceX+i)||(targetX==sourceX-i))
				status=1;
		}
		return (status);
	}
	else if (targetX==sourceX)
	{
		for (i=0; i<BOARD_SIZE; i++) 
		{
/*--------------Vezir tasinin sola veya saga hareket etmesi-------------------*/
			if ((targetY==sourceY+i)||(targetY==sourceY-i))
				status=1;
		}
		return (status);
	}
	else if ((targetX!=sourceX)||(targetY!=sourceY))
	{
		for (i=0; i<BOARD_SIZE; i++)
		{
/*---------------Vezir tasinin capraz olarak hareket etmesi-------------------*/
			if(((targetX==sourceX+i)&&(targetY==sourceY+i))||
		  	   ((targetX==sourceX+i)&&(targetY==sourceY-i))||
		  	   ((targetX==sourceX-i)&&(targetY==sourceY+i))||
		  	   ((targetX==sourceX-i)&&(targetY==sourceY-i)))	
				status=1;
		}
		return (status);
	}
/*----------------------------------------------------------------------------*/
	return (FAIL);	
}

int makeMove(char *board, char sc, int sr, char tc, int tr)
{
	char col [BOARD_SIZE]={'a','b','c','d','e','f','g','h'},currentPlayer;
	char temp[1]={' '};/*Oynanan tasin geri alinmasi icin tanimlanan array    */
	int row [BOARD_SIZE]={8,7,6,5,4,3,2,1},sourceX,sourceY,targetX,targetY,src,
	checkStatus,trgt,kingCheck;
	sourceX=rowSearch (row,BOARD_SIZE,sr);
	sourceY=colSearch (col,BOARD_SIZE,sc);
	targetX=rowSearch (row,BOARD_SIZE,tr);
	targetY=colSearch (col,BOARD_SIZE,tc);
	src=(sourceX*BOARD_SIZE)+sourceY;
	trgt=(targetX*BOARD_SIZE)+targetY;
	currentPlayer=getPlayer(board,sc,sr);
	checkStatus=isInCheck(board);/*Sahin sah olma durumunu gosteren degisken  */
/*----------Sahin rakip saha sah cekip cekmedigini gosteren degisken----------*/
	kingCheck=isKingCheckToKing (board);
/*----------------------------------------------------------------------------*/
	if (checkStatus==0)/*Sah olmama durumu*/
	{
		if (isPieceMovable(board,sc,sr,tc,tr))
		{
			if (kingCheck==1)/*Rakip saha sah cekilme durumu*/
			{
				if ((isPieceMovable(board,sc,sr,tc,tr)) && 
				(board[src]!='k' && board[src]!='K'))
				{
/*-------------------------Taslarin hareket etmesi----------------------------*/
					board[trgt]=board[src];
					board[src]=' ';
					checkStatus=isInCheck(board);
/*----------------------------------------------------------------------------*/
					if (checkStatus==2)/*     Siyah sahin sah olmasi          */
						return 3;
					else if (checkStatus==1)/*    Beyaz sahin sah olmasi      */
						return 3;
					return 2;
				}
				return FAIL;
			}
/*-------------------------Taslarin hareket etmesi----------------------------*/
			board[trgt]=board[src];
			board[src]=' ';
			checkStatus=isInCheck(board);
/*----------------------------------------------------------------------------*/
			if (checkStatus==2) /* Siyah sahin sah olmasi */
				return 3;
			else if (checkStatus==1) /* Beyaz sahin sah olmasi */
				return 3;
			return 2;
		}
		else
			return FAIL;
	}	
	else if (checkStatus==1) /* Beyzaz sahin sah olmasi */
	{
		if (isWhite(currentPlayer)) /* Eger oynayan oyuncu beyaz ise */
		{
			if (isPieceMovable(board,sc,sr,tc,tr))
			{
/*-------------------------Taslarin hareket etmesi----------------------------*/
				temp[1]=board[trgt];
				board[trgt]=board[src];
				board[src]=' ';
				checkStatus=isInCheck(board);
/*----------------------------------------------------------------------------*/
				if (checkStatus==0) /* Sah olmama durumu*/
					return 2;				
				else if (checkStatus==2) /* Siyah sahin sah olmasi */
					return 3;
				else if (checkStatus==1) /* Beyaz sahin sah olmasi */
				{
/*-----------------------Oynanan tasin geri alinmasi--------------------------*/
					board[src]=board[trgt];
					board[trgt]=temp[1];
/*----------------------------------------------------------------------------*/
					return 1;				
				}
			}
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (checkStatus==2) /* Siyah sahin sah olama durumu */
	{
		if (isBlack(currentPlayer)) /* Eger oynayan oyuncu siyah ise */
		{
			if (isPieceMovable(board,sc,sr,tc,tr))
			{
/*-------------------------Taslarin hareket etmesi----------------------------*/
				temp[1]=board[trgt];
				board[trgt]=board[src];
				board[src]=' ';
				checkStatus=isInCheck(board);
/*----------------------------------------------------------------------------*/
				if (checkStatus==0) /* Sah olmama durumu*/
					return 2;				
				else if (checkStatus==2) /* Siyah sahin sah olma durumu */
				{
/*-----------------------Oynanan tasin geri alinmasi--------------------------*/
				    board[src]=board[trgt];
					board[trgt]=temp[1];
/*----------------------------------------------------------------------------*/
					return 1;
				}
				else if (checkStatus==1) /* Beyaz sahin sah olma durumu */
					return 3;
			}
			return 1;
		}
		else
		{
			return 3;
		}
	}
	return FAIL;
}

int isInCheck(char* board)
{
	int i,j,k,status,count,count2;
	count=0; /*Siyah sah icin satir sayisini gosteren degisken */
	count2=0; /*Beyaz sah icin satir sayisini gosteren degisken */
	status=0; /*Fonksiyonun dondurecegi deger*/
	for (i=0; i<64; i++)
	{
		if (i%8==0) /*Siyah sah icin satir sayisinin bulunmasi*/
			count++;
		if (board[i]=='k')
		{
/*-------Siyah sahin sah olup olmamam durumunun butun olasiliklari------------*/
			if ((board[i+7]=='P')||(board[i+9]=='P'))
				status=2;
			else if ((board[i+6]=='N')||(board[i-6]=='N')||(board[i+10]=='N')||
					(board[i-10]=='N')||(board[i+15]=='N')||(board[i-15]=='N')||
					(board[i+17]=='N')||(board[i-17]=='N'))
				status=2;
			for (j=i+8; j<64; j=j+8)
			{
				if(((board[j]=='R')||(board[j]=='Q'))&&
				(kingDownEmpty(board,i,j)))
					status=2;
			}
			for (j=i+9; j<64; j=j+9)
			{
				if(((board[j]=='B')||(board[j]=='Q'))&&
				(kingRightDownCrossEmpty(board,i,j)))
					status=2;
			}
			for (j=i+7; j<64; j=j+7)
			{
				if(((board[j]=='B'||board[j]=='Q'))&&
				(kingLeftDownCrossEmpty(board,i,j)))
					status=2;
			}
			for (j=i+1; j<count*8; j++)
			{
				if(((board[j]=='R')||(board[j]=='Q'))&&
				(kingRightEmpty(board,i,j)))
					status=2;
			}
			for (j=i-8; j>=0; j=j-8)
			{
				if(((board[j]=='R')||(board[j]=='Q'))&&(kingUpEmpty(board,i,j)))
					status=2;
			}
			for (j=i-9; j>=0; j=j-9)
			{
				if(((board[j]=='B')||(board[j]=='Q'))&&
				(kingLeftUpCrossEmpty(board,i,j)))
					status=2;
			}
			for (j=i-7; j>=0; j=j-7)
			{
				if(((board[j]=='B')||(board[j]=='Q'))&&
				(kingRightUpCrossEmpty(board,i,j)))
					status=2;
			}
			for (j=i-1; j>=(count-1)*8; j--)
			{
				if(((board[j]=='R')||(board[j]=='Q'))&&
				(kingLeftEmpty(board,i,j)))
					status=2;
			}
		}
	}
/*----------------------------------------------------------------------------*/
	for (k=0; k<64; k++)
	{
		if (k%8==0) /* Beyaz sah icin satir sayisinin bulunmasi */
			count2++;
		if (board[k]=='K')
		{
/*-------Beyaz sahin sah olup olmamam durumunun butun olasiliklari------------*/
			if ((board[k-7]=='p')||(board[k-9]=='p'))
				status=1;
			else if ((board[k+6]=='n')||(board[k-6]=='n')||(board[k+10]=='n')||
					(board[k-10]=='n')||(board[k+15]=='n')||(board[k-15]=='n')||
					(board[k+17]=='n')||(board[k-17]=='n'))
				status=1;
			for (j=k+8; j<64; j=j+8)
			{
				if(((board[j]=='r')||(board[j]=='q'))&&
				(kingDownEmpty(board,k,j)))
					status=1;
			}
			for (j=k+9; j<64; j=j+9)
			{
				if(((board[j]=='b')||(board[j]=='q'))&&
				(kingRightDownCrossEmpty(board,k,j)))
					status=1;
			}
			for (j=k+7; j<64; j=j+7)
			{
				if(((board[j]=='b'||board[j]=='q'))&&
				(kingLeftDownCrossEmpty(board,k,j)))
					status=1;
			}
			for (j=k+1; j<count2*8; j++)
			{
				if(((board[j]=='r')||(board[j]=='q'))&&
				(kingRightEmpty(board,k,j)))
					status=1;
			}
			for (j=k-8; j>=0; j=j-8)
			{
				if(((board[j]=='r')||(board[j]=='q'))&&
				(kingUpEmpty(board,k,j)))
					status=1;
			}
			for (j=k-9; j>=0; j=j-9)
			{
				if(((board[j]=='b')||(board[j]=='q'))&&
				(kingLeftUpCrossEmpty(board,k,j)))
					status=1;
			}
			for (j=k-7; j>=0; j=j-7)
			{
				if(((board[j]=='b')||(board[j]=='q'))&&
				(kingRightUpCrossEmpty(board,k,j)))
					status=1;
			}
			for (j=k-1; j>=(count2-1)*8; j--)
			{
				if(((board[j]=='r')||(board[j]=='q'))&&
				(kingLeftEmpty(board,k,j)))
					status=1;
			}
		}
	}
/*----------------------------------------------------------------------------*/
	return status;
}

int isKingCheckToKing (char* board)
{
	int i,k,status;
	status=0;
	for (i=0; i<64; i++)
	{
		if (board[i]=='k')
		{
			if ((board[i+15]=='K')||(board[i+16]=='K')||(board[i+17]=='K'))
				status=1;
		}
	}
	for (k=0; k<64; k++)
	{
		if (board[k]=='K')
		{
			if ((board[i+15]=='k')||(board[i+16]=='k')||(board[i+17]=='k'))
				status=1;
		}
	}
	return status;
}

int kingDownEmpty (char* board,int target,int loc)
{
	int moveNum,i,status;
	status=0;
	moveNum= loc-target; /*Kontrol edilecek kare sayisi*/
	if (moveNum==8) /*Eger kare sayisi bir ise*/
	{
		status=1;
		return status;
	}
	for (i=8; i<moveNum; i=i+8)
	{
		if(board[target+i]==' ')
			status=1;
		else
		{
			status=0;
			return status;
		}
	}
	return status;
}

int kingRightDownCrossEmpty (char* board,int target,int loc)
{
	int moveNum,i,status;
	status=0;
	moveNum= loc-target; /*Kontrol edilecek kare sayisi*/
	if (moveNum==9) /*Eger kare sayisi bir ise*/
	{
		status=1;
		return status;
	}
	for (i=9; i<moveNum; i=i+9)
	{
		if(board[target+i]==' ')
			status=1;
		else
		{
			status=0;
			return status;
		}
	}
	return status;
}

int kingLeftDownCrossEmpty (char* board,int target,int loc)
{
	int moveNum,i,status;
	status=0;
	moveNum= loc-target; /*Kontrol edilecek kare sayisi*/
	if (moveNum==7) /*Eger kare sayisi bir ise*/
	{
		status=1;
		return status;
	}
	for (i=7; i<moveNum; i=i+7)
	{
		if(board[target+i]==' ')
			status=1;
		else
		{
			status=0;
			return status;
		}
	}
	return status;
}

int kingUpEmpty (char* board,int target,int loc)
{
	int moveNum,i,status;
	status=0;
	moveNum= target-loc; /*Kontrol edilecek kare sayisi*/
	if (moveNum==8) /*Eger kare sayisi bir ise*/
	{
		status=1;
		return status;
	}
	for (i=8; i<moveNum; i=i+8)
	{
		if(board[target-i]==' ')
			status=1;
		else
		{
			status=0;
			return status;
		}
	}
	return status;
}

int kingLeftUpCrossEmpty (char* board,int target,int loc)
{
	int moveNum,i,status;
	status=0;
	moveNum= target-loc; /*Kontrol edilecek kare sayisi*/
	if (moveNum==9) /*Eger kare sayisi bir ise*/
	{
		status=1;
		return status;
	}
	for (i=9; i<moveNum; i=i+9)
	{
		if(board[target-i]==' ')
			status=1;
		else
		{
			status=0;
			return status;
		}
	}
	return status;
}

int kingRightUpCrossEmpty (char* board,int target,int loc)
{
	int moveNum,i,status;
	status=0;
	moveNum= target-loc; /*Kontrol edilecek kare sayisi*/
	if (moveNum==7) /*Eger kare sayisi bir ise*/
	{
		status=1;
		return status;
	}
	for (i=7; i<moveNum; i=i+7)
	{
		if(board[target-i]==' ')
			status=1;
		else
		{
			status=0;
			return status;
		}
	}
	return status;
}

int kingRightEmpty (char* board,int target,int loc)
{
	int moveNum,i,status;
	status=0;
	moveNum=loc-target; /*Kontrol edilecek kare sayisi*/
	if (moveNum==1) /*Eger kare sayisi bir ise*/
	{
		status=1;
		return status;
	}
	for (i=1; i<moveNum; i=i+1)
	{
		if(board[target+i]==' ')
			status=1;
		else
		{
			status=0;
			return status;
		}
	}
	return status;
}

int kingLeftEmpty (char* board,int target,int loc)
{
	int moveNum,i,status;
	status=0;
	moveNum=target-loc; /*Kontrol edilecek kare sayisi*/
	if (moveNum==1) /*Eger kare sayisi bir ise*/
	{
		status=1;
		return status;
	}
	for (i=1; i<moveNum; i=i+1)
	{
		if(board[target-i]==' ')
			status=1;
		else
		{
			status=0;
			return status;
		}
	}
	return status;
}

int isPieceMovable(char *board,char sc,int sr,char tc,int tr)
{
	char col [BOARD_SIZE]={'a','b','c','d','e','f','g','h'};
	char black[6]={'r','n','b','q','k','p'};
	char white[6]={'R','N','B','K','Q','P'};
	int row [BOARD_SIZE]={8,7,6,5,4,3,2,1},sourceX,sourceY,targetX,targetY,i,k,
	src,trgt,moveNum;
/*-----------Satranc tahtasinin icine erismek icin yapilan islemler-----------*/
	sourceX=rowSearch (row,BOARD_SIZE,sr);
	sourceY=colSearch (col,BOARD_SIZE,sc);
	targetX=rowSearch (row,BOARD_SIZE,tr);
	targetY=colSearch (col,BOARD_SIZE,tc);
	src=(sourceX*BOARD_SIZE)+sourceY;
	trgt=(targetX*BOARD_SIZE)+targetY;
	moveNum=(trgt-src); /*Kontrol edilecek kare sayisi*/
/*----------------------------------------------------------------------------*/
/*-----------Butun taslarin hareket edip edemeyeceginin kontrolu--------------*/
	for (i=0; i<6; i++)
	{
/*-------------------Piyon tasinin hareketini kontrolu------------------------*/
		if((board[src]=='P')&&((board[trgt]==' ')||
		   ((board[trgt]==black[i])&&(board[trgt]!=white[i]))))
		{
			if (isPawnMovable(board,sc,sr,tc,tr))
				return SUCCESS;	
		}
		else if ((board[src]=='p')&&((board[trgt]==' ')||
				 ((board[trgt]==white[i])&&(board[trgt]!=black[i]))))
		{
			if (isPawnMovable(board,sc,sr,tc,tr))
				return SUCCESS;
		}
/*----------------------------------------------------------------------------*/
/*----------------------At tasinin hareketini kontrolu------------------------*/
		if((board[src]=='N')&&((board[trgt]==' ')||
		   ((board[trgt]==black[i])&&(board[trgt]!=white[i]))))
		{
			if(isKnightMovable(board,sc,sr,tc,tr))
				return (SUCCESS);
		}
		else if ((board[src]=='n')&&((board[trgt]==' ')||
				 ((board[trgt]==white[i])&&(board[trgt]!=black[i]))))
		{
			if(isKnightMovable(board,sc,sr,tc,tr))
				return (SUCCESS);
		}
/*----------------------------------------------------------------------------*/
		if((board[src]=='Q')&&((board[trgt]==' ')||
			((board[trgt]==black[i])&&(board[trgt]!=white[i]))))
		{
/*Vezir tasinin gidecegi yer ile arasindaki karelerin bos olup olmama kontrolu*/
			if ((moveNum>0)&&(moveNum%8==0)) 
		    {
				for(k=8; k<moveNum; k=k+8)
				{
/*-----Vezir tasinin konumuna gore asagidaki karelerin kontolu----------------*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);
			}
			else if ((moveNum>0)&&(moveNum%9==0))
			{
				for(k=9; k<moveNum; k=k+9)
				{
/*-----Vezir tasinin konumuna gore sag capraz asagidaki karelerin kontolu-----*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))							
					return (SUCCESS);	
			}
			else if (moveNum>0 && moveNum%7==0)
			{
				for(k=7; k<moveNum; k=k+7)
				{
/*-----Vezir tasinin konumuna gore sol capraz asagidaki karelerin kontolu-----*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum>0 && moveNum%1==0)
			{
				for(k=1; k<moveNum; k=k+1)
				{
/*-----Vezir tasinin konumuna gore sag tarafindaki karelerin kontolu----------*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%8==0)
			{
				for(k=8; k<abs(moveNum); k=k+8)
				{
/*-----Vezir tasinin konumuna gore yukaridaki karelerin kontolu---------------*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if ((moveNum<0)&&(moveNum%9==0)) 
			{
				for(k=9; k<abs(moveNum); k=k+9)
				{
/*-----Vezir tasinin konumuna gore sol capraz yukaridaki karelerin kontolu----*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%7==0)
			{
/*-----Vezir tasinin konumuna gore sag capraz yukaridaki karelerin kontolu----*/
				for(k=7; k<abs(moveNum); k=k+7)
				{
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%1==0)
			{
				for(k=1; k<abs(moveNum); k=k+1)
				{
/*-----Vezir tasinin konumuna gore sol tarafindaki karelerin kontolu----------*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
		}
/*----------------------------------------------------------------------------*/
		else if ((board[src]=='q')&&((board[trgt]==' ')||
			 ((board[trgt]==white[i])&&(board[trgt]!=black[i]))))
		{
/*Vezir tasinin gidecegi yer ile arasindaki karelerin bos olup olmama kontrolu*/
			if ((moveNum>0)&&(moveNum%8==0)) 
		    {
				for(k=8; k<moveNum; k=k+8)
				{
/*-----Vezir tasinin konumuna gore asagidaki karelerin kontolu----------------*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);
			}
			else if ((moveNum>0)&&(moveNum%9==0))
			{
				for(k=9; k<moveNum; k=k+9)
				{
/*-----Vezir tasinin konumuna gore sag capraz asagidaki karelerin kontolu-----*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))							
					return (SUCCESS);	
			}
			else if (moveNum>0 && moveNum%7==0)
			{
				for(k=7; k<moveNum; k=k+7)
				{
/*-----Vezir tasinin konumuna gore sol capraz asagidaki karelerin kontolu-----*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum>0 && moveNum%1==0)
			{
				for(k=1; k<moveNum; k=k+1)
				{
/*-----Vezir tasinin konumuna gore sag tarafindaki karelerin kontolu----------*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%8==0)
			{
				for(k=8; k<abs(moveNum); k=k+8)
				{
/*-----Vezir tasinin konumuna gore yukaridaki karelerin kontolu---------------*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if ((moveNum<0)&&(moveNum%9==0)) 
			{
				for(k=9; k<abs(moveNum); k=k+9)
				{
/*-----Vezir tasinin konumuna gore sol capraz yukaridaki karelerin kontolu----*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%7==0)
			{
/*-----Vezir tasinin konumuna gore sag capraz yukaridaki karelerin kontolu----*/
				for(k=7; k<abs(moveNum); k=k+7)
				{
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%1==0)
			{
				for(k=1; k<abs(moveNum); k=k+1)
				{
/*-----Vezir tasinin konumuna gore sol tarafindaki karelerin kontolu----------*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isQueenMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
		}
/*----------------------------------------------------------------------------*/  
		if((board[src]=='R')&&((board[trgt]==' ')||
	   	   ((board[trgt]==black[i])&&(board[trgt]!=white[i]))))
		{
/*Kale tasinin gidecegi yer ile arasindaki karelerin bos olup olmama kontrolu */
			if ((moveNum>0)&&(moveNum%8==0)) 
		    {
				for(k=8; k<moveNum; k=k+8)
				{
/*------Kale tasinin konumuna gore asagidaki karelerin kontolu----------------*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isRookMovable(board,sc,sr,tc,tr))
					return (SUCCESS);
			}
			else if (moveNum>0 && moveNum%1==0)
			{
				for(k=1; k<moveNum; k=k+1)
				{
/*------Kale tasinin konumuna gore sag tarafindaki karelerin kontolu----------*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isRookMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%8==0)
			{
				for(k=8; k<abs(moveNum); k=k+8)
				{
/*------Kale tasinin konumuna gore yukaridaki karelerin kontolu---------------*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isRookMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%1==0)
			{
				for(k=1; k<abs(moveNum); k=k+1)
				{
/*-----Kale tasinin konumuna gore sol tarafindaki karelerin kontolu-----------*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isRookMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
		}
/*----------------------------------------------------------------------------*/
		else if ((board[src]=='r')&&((board[trgt]==' ')||
				 ((board[trgt]==white[i])&&(board[trgt]!=black[i]))))
		{
/*Kale tasinin gidecegi yer ile arasindaki karelerin bos olup olmama kontrolu */
			if ((moveNum>0)&&(moveNum%8==0)) 
		    {
				for(k=8; k<moveNum; k=k+8)
				{
/*------Kale tasinin konumuna gore asagidaki karelerin kontolu----------------*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isRookMovable(board,sc,sr,tc,tr))
					return (SUCCESS);
			}
			else if (moveNum>0 && moveNum%1==0)
			{
				for(k=1; k<moveNum; k=k+1)
				{
/*------Kale tasinin konumuna gore sag tarafindaki karelerin kontolu----------*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isRookMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%8==0)
			{
				for(k=8; k<abs(moveNum); k=k+8)
				{
/*------Kale tasinin konumuna gore yukaridaki karelerin kontolu---------------*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isRookMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%1==0)
			{
				for(k=1; k<abs(moveNum); k=k+1)
				{
/*-----Kale tasinin konumuna gore sol tarafindaki karelerin kontolu-----------*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isRookMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
		}
/*----------------------------------------------------------------------------*/
		if ((board[src]=='B')&&((board[trgt]==' ')||
			((board[trgt]==black[i])&&(board[trgt]!=white[i]))))
		{
/* Fil tasinin gidecegi yer ile arasindaki karelerin bos olup olmama kontrolu */
			if ((moveNum>0)&&(moveNum%9==0))
			{
				for(k=9; k<moveNum; k=k+9)
				{
/*-----Fil tasinin konumuna gore sag capraz asagidaki karelerin kontolu-------*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isBishopMovable(board,sc,sr,tc,tr))							
					return (SUCCESS);	
			}
			else if (moveNum>0 && moveNum%7==0)
			{
				for(k=7; k<moveNum; k=k+7)
				{
/*-------Fil tasinin konumuna gore sol capraz asagidaki karelerin kontolu-----*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isBishopMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if ((moveNum<0)&&(moveNum%9==0)) 
			{
				for(k=9; k<abs(moveNum); k=k+9)
				{
/*-------Fil tasinin konumuna gore sol capraz yukaridaki karelerin kontolu----*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isBishopMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%7==0)
			{
/*-------Fil tasinin konumuna gore sag capraz yukaridaki karelerin kontolu----*/
				for(k=7; k<abs(moveNum); k=k+7)
				{
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isBishopMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
		}
/*----------------------------------------------------------------------------*/
		else if ((board[src]=='b')&&((board[trgt]==' ')||
				 ((board[trgt]==white[i])&&(board[trgt]!=black[i]))))
		{
/* Fil tasinin gidecegi yer ile arasindaki karelerin bos olup olmama kontrolu */
			if ((moveNum>0)&&(moveNum%9==0))
			{
				for(k=9; k<moveNum; k=k+9)
				{
/*-----Fil tasinin konumuna gore sag capraz asagidaki karelerin kontolu-------*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isBishopMovable(board,sc,sr,tc,tr))							
					return (SUCCESS);	
			}
			else if (moveNum>0 && moveNum%7==0)
			{
				for(k=7; k<moveNum; k=k+7)
				{
/*-------Fil tasinin konumuna gore sol capraz asagidaki karelerin kontolu-----*/
					if(board[src+k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isBishopMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if ((moveNum<0)&&(moveNum%9==0)) 
			{
				for(k=9; k<abs(moveNum); k=k+9)
				{
/*-------Fil tasinin konumuna gore sol capraz yukaridaki karelerin kontolu----*/
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isBishopMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
			else if (moveNum<0 && moveNum%7==0)
			{
/*-------Fil tasinin konumuna gore sag capraz yukaridaki karelerin kontolu----*/
				for(k=7; k<abs(moveNum); k=k+7)
				{
					if(board[src-k]==' ')
						; /*Program hicbir sey yapmayacak*/
					else
						return FAIL;
				}
/*----------------------------------------------------------------------------*/
				if(isBishopMovable(board,sc,sr,tc,tr))
					return (SUCCESS);	
			}
		}
/*----------------------------------------------------------------------------*/
/*-------------------Sah tasinin hareketinin kontrolu-------------------------*/
		if(((board[src]=='K')&&(((board[src+1]==' ')||
			(board[src-1]==' '))||((board[src+8]==' ')||
			(board[src-8]==' '))||((board[src+7]==' ')||
			(board[src-7]==' '))||((board[src+9]==' ')||
			(board[src-9]==' ')))&&(((board[trgt]==' '))||
			((board[trgt]==black[i])))))
		{
			if(isKingMovable(board,sc,sr,tc,tr))
				return (SUCCESS);
		}
		else if(((board[src]=='k'))&&(((board[src+1]==' ')||
			(board[src-1]==' '))||((board[src+8]==' ')||
			(board[src-8]==' '))||((board[src+7]==' ')||
			(board[src-7]==' '))||((board[src+9]==' ')||
			(board[src-9]==' ')))&&(((board[trgt]==' '))||
			((board[trgt]==white[i]))))	
		{
			if(isKingMovable(board,sc,sr,tc,tr))
				return (SUCCESS);
		}
/*----------------------------------------------------------------------------*/
	}
	return FAIL;		
}	
/*----------------------------------------------------------------------------*/

int colSearch (char *arr, int size, char item)
{
	int where,found,i;
	found=0;
	where=0;
	for (i=0; i<size; i++)
	{
		if (arr[i]==item)
		{
			found=1;
			if (found)
			{
				where=i;
				return (where);
			}
		}
	}
	return (found);
}

int rowSearch (int *arr, int size, int item)
{
	int where,found,i;
	found=0;
	where=0;
	for (i=0; i<size; i++)
	{
		if (arr[i]==item)
		{
			found=1;
			if (found)
			{
				where=i;
				return (where);
			}
		}
	}
	return (found);
}

void initBoard (char *board)
{
	int i,j;	
	char white[BOARD_SIZE]={'r','n','b','q','k','b','n','r'};
	char black[BOARD_SIZE]={'R','N','B','K','Q','B','N','R'};
	for (i=0; i<8; i++)
		board[i]=white[i];
	for(i=8; i<16; i++)
		board[i]='p';
	for (i=16; i<48; i++)
		board[i]=' ';
	for (i=48; i<56; i++)
		board[i]='P';
	j=7;
	for (i=56; i<64; i++,j--)
		board[i]=black[j];
}

void printBoard(char *board)
{
	int i,j;
	char coord[BOARD_SIZE]={'a','b','c','d','e','f','g','h'};
	for (j=1; j<=2; j++)
		printf (" ");
	for (i=0; i<8; i++)
		printf ("%c ",coord[i]);
	printf ("\n");
	for (j=1; j<=2; j++)
		printf (" ");
	for (i=0; i<8; i++)
		printf ("- ");
	printf ("\n");
	printf ("8|");
	for (i=0; i<7; i++)
		printf ("%c ",board[i]);
	printf ("%c",board[7]);
	printf ("|\n");
	printf ("7|");
	for (i=8; i<15; i++)
		printf ("%c ",board[i]);
	printf ("%c",board[15]);
	printf ("|\n");
	printf ("6|");
	for (i=16; i<23; i++)
		printf ("%c ",board[i]);
	printf ("%c",board[23]);
	printf ("|\n");
	printf ("5|");
	for (i=24; i<31; i++)
		printf ("%c ",board[i]);
	printf ("%c",board[31]);
	printf ("|\n");
	printf ("4|");
	for (i=32; i<39; i++)
		printf ("%c ",board[i]);
	printf ("%c",board[39]);
	printf ("|\n");
	printf ("3|");
	for (i=40; i<47; i++)
		printf ("%c ",board[i]);
	printf ("%c",board[47]);
	printf ("|\n");
	printf ("2|");
	for (i=48; i<55; i++)
		printf ("%c ",board[i]);
	printf ("%c",board[55]);
	printf ("|\n");
	printf ("1|");
	for (i=56; i<63; i++)
		printf ("%c ",board[i]);
	printf ("%c",board[63]);
	printf ("|\n");
	for (j=1; j<=2; j++)
		printf (" ");
	for (i=0; i<8; i++)
		printf ("- ");
	printf ("\n");
}
