/*	Nama		: Sitti Ufairoh Azzahra
	NPM			: 140810180002
	Kelas		: B
	Deskripsi	: Program Tilling
*/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int board[1000][1000];
int no = 0;
int quadrant = 0;

void trominoTile(int xBoard,
                 int yBoard,
                 int x_hole,
                 int y_hole,
                 int boardSize);

void trominoTile(int xBoard, int yBoard, int x_hole, int y_hole, int boardSize){

    int halfSize = boardSize / 2,
        xCenter = 0,
        yCenter = 0;

    xCenter = xBoard + halfSize - 1;
    yCenter = yBoard + halfSize - 1;

    if (boardSize == 2){
        if (board[xBoard][yBoard + 1] == 0 && board[xBoard + 1][yBoard] == 0 && board[xBoard + 1][yBoard + 1] == 0){
            no++;
            board[xBoard][yBoard + 1] = no;
            board[xBoard + 1][yBoard] = no;
            board[xBoard + 1][yBoard + 1] = no;
        }

        if (board[xBoard][yBoard] == 0 && board[xBoard + 1][yBoard] == 0 && board[xBoard + 1][yBoard + 1] == 0){
            no++;
            board[xBoard][yBoard] = no;
            board[xBoard + 1][yBoard] = no;
            board[xBoard + 1][yBoard + 1] = no;
        }

        if (board[xBoard][yBoard + 1] == 0 && board[xBoard][yBoard] == 0 && board[xBoard + 1][yBoard + 1] == 0){
            no++;
            board[xBoard + 1][yBoard + 1] = no;
            board[xBoard][yBoard + 1] = no;
            board[xBoard][yBoard] = no;
        }

        if (board[xBoard][yBoard + 1] == 0 && board[xBoard + 1][yBoard] == 0 && board[xBoard][yBoard] == 0){
            no++;
            board[xBoard][yBoard] = no;
            board[xBoard][yBoard + 1] = no;
            board[xBoard + 1][yBoard] = no;
        }

        return;
    }

    if (x_hole <= xCenter){
        if (y_hole <= yCenter){
            if (board[xCenter][yCenter + 1] == 0 && board[xCenter + 1][yCenter] == 0 && board[xCenter + 1][yCenter + 1] == 0){
                no++;
                board[xCenter][yCenter + 1] = no;
                board[xCenter + 1][yCenter] = no;
                board[xCenter + 1][yCenter + 1] = no;
                quadrant = 1;
            }
        }
        else{
            if (board[xCenter][yCenter] == 0 && board[xCenter + 1][yCenter] == 0 && board[xCenter + 1][yCenter + 1] == 0){
                no++;
                board[xCenter][yCenter] = no;
                board[xCenter + 1][yCenter + 1] = no;
                board[xCenter + 1][yCenter] = no;
                quadrant = 2;
            }
        }
    }
    else{
        if (y_hole <= yCenter){
            if (board[xCenter][yCenter + 1] == 0 && board[xCenter][yCenter] == 0 && board[xCenter + 1][yCenter + 1] == 0){
                no++;
                board[xCenter][yCenter] = no;
                board[xCenter][yCenter + 1] = no;
                board[xCenter + 1][yCenter + 1] = no;
                quadrant = 3;
            }
        }
        else{
            if (board[xCenter + 1][yCenter] == 0 && board[xCenter][yCenter] == 0 && board[xCenter][yCenter + 1] == 0){
                no++;
                board[xCenter][yCenter] = no;
                board[xCenter][yCenter + 1] = no;
                board[xCenter + 1][yCenter] = no;
                quadrant = 4;
            }
        }
    }

    if (quadrant == 1){
        trominoTile(xBoard, yBoard, x_hole, y_hole, halfSize);
        trominoTile(xBoard, yCenter + 1, xCenter, yCenter + 1, halfSize);
        trominoTile(xCenter + 1, yBoard, xCenter + 1, yCenter, halfSize);
        trominoTile(xCenter + 1, yCenter + 1, xCenter + 1, yCenter + 1,
                    halfSize);
    }

    if (quadrant == 2){
        trominoTile(xBoard, yBoard, xCenter, yCenter, halfSize);
        trominoTile(xBoard, yCenter + 1, x_hole, y_hole, halfSize);
        trominoTile(xCenter + 1, yBoard, xCenter + 1, yCenter, halfSize);
        trominoTile(xCenter + 1, yCenter + 1, xCenter + 1, yCenter + 1,
                    halfSize);
    }

    if (quadrant == 3){
        trominoTile(xBoard, yBoard, xCenter, yCenter, halfSize);
        trominoTile(xBoard, yCenter + 1, xCenter, yCenter + 1, halfSize);
        trominoTile(xCenter + 1, yBoard, x_hole, y_hole, halfSize);
        trominoTile(xCenter + 1, yCenter + 1, xCenter + 1, yCenter + 1,
                    halfSize);
    }

    if (quadrant == 4){
        trominoTile(xBoard, yBoard, xCenter, yCenter, halfSize);
        trominoTile(xBoard, yCenter + 1, xCenter, yCenter + 1, halfSize);
        trominoTile(xCenter + 1, yBoard, xCenter + 1, yCenter, halfSize);
        trominoTile(xCenter + 1, yCenter + 1, x_hole, y_hole, halfSize);
    }
}

int main(){
    int boardSize, x_hole, y_hole;
    do{
        printf("\n-------------------------------------");
        printf("\nEnter size of board (0 to quit): ");
        scanf("%d", &boardSize);
        if (boardSize){
            printf("\nEnter coordinates of missing hole: ");
            scanf("%d%d", &x_hole, &y_hole);
            for (int i = 1; i <= pow(2, boardSize); i++){
                for (int j = 1; j <= pow(2, boardSize); j++){
                    board[i][j] = 0;
                }
            }
            board[x_hole][y_hole] = -1;

            trominoTile(1, 1, x_hole, y_hole, pow(2, boardSize));

            for (int i = 1; i <= pow(2, boardSize); i++){
                for (int j = 1; j <= pow(2, boardSize); j++){
                    if (i == x_hole && j == y_hole){
                        board[i][j] == -1;
                        printf("%4s", "X");
                    }
                    else{
                        printf("%4d", board[i][j]);
                    }
                }cout << endl;
            }
        }no = 0;
    }

    while (boardSize);

    return EXIT_SUCCESS;
}
