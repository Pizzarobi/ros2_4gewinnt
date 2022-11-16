#include <iostream>

#define G_WIDTH 7
#define G_HEIGHT 6

void playerMove();
void drawCoin(int row, int column, int player);
int getLowest(int column);

int field[G_WIDTH][G_HEIGHT];

int player = 0; // 0 = empty, 1 = player1 , 2 = player2
int column = 0; // 0-6

int playerTurn = 1; // changes after playerMove

int main(){
    playerMove();
}

void playerMove(){
    // check for correct player
    int player = 1; // Wird ersetzt durch eingabe von Subscriber
    if(player != playerTurn){
        return;
    }

    int column = 5-1; // Wird ersetzt durch eingabe von Subscriber muss aber 1 abziehen

    //checks if valid move
    int row = getLowest(column);
    if(row>=7){
        // invalid move
        // dont change playerTurn
        return;
    }
    // Valid Move
    // set array
    field[row][column] = playerTurn;

    drawCoin(row,column,playerTurn);
    // Change player Turn
    if(playerTurn == 1)
        playerTurn = 2;
    else
        playerTurn = 1;

}

void drawCoin(int row, int column, int player){
    //drawAufruf
}

// Returns lowest empty Row. If Column is full return 7
int getLowest(int column){
    int lowestEmptyRow = 0;
    for (int i = 0; i < 6 ; i++){
        if(field[i][column]==0){
            lowestEmptyRow=i;
            return lowestEmptyRow;
        }
    }
    return 7;
}
