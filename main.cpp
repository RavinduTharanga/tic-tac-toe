#include <iostream>
#include <stdlib.h>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice,row,column;
char turn = 'x';

bool draw = false;

void display_board(){

    cout<<"PLAYER - 1 [X]t PLAYER - 2 [O]\n";
    cout<<"     |     |     \n";
    cout<<" "<<board[0][0]<<"   | " <<board[0][1]<<"   |  "<<board[0][2]<<"\n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<" "<<board[1][0]<<"   | " <<board[1][1]<<"   |  "<<board[1][2]<<" \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<" "<<board[2][0]<<"   | " <<board[2][1]<<"   |  "<<board[2][2]<<" \n";
    cout<<"     |     |     \n";
}

void player_turn(){
    if(turn == 'x'){
        cout<<"Player - 1 [X] turn : ";
    }
    else if (turn == 'o'){
        cout<<"Player - 2 [O] turn : ";

    }
    cin>> choice;

    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }

    if(turn == 'x' && board[row][column] != 'x' && board[row][column] != 'o'){
        board[row][column] ='x';
        turn = 'o';
    }
    else if(turn == 'o' && board[row][column] != 'x' && board[row][column] != 'O'){
        //updating the position for 'O' symbol if
        //it is not already occupied
        board[row][column] = 'o';
        turn = 'x';
    }
    else {
        //if input position already filled
        cout<<"Box already filled!n Please choose another!";
        player_turn();
    }
    
}

bool gameover(){
    //checking the win for Simple Rows and Simple Column
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;

    //checking the win for both diagonal

    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;

    //Checking the game is in continue mode or not
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'x' && board[i][j] != 'O')
    return true;

    //Checking the if game already draw
    draw = true;
    // return false;
}

int main()
{
    cout<<"T I C K -- T A C -- T O E -- G A M E\n";
    cout<<"FOR 2 PLAYERS\n";
    while(gameover()){
        display_board();
        player_turn();
        gameover();
    }
    if(turn == 'x' && draw == false){
        cout<<"Congratulations!Player with 'X' has won the game\n";
        display_board();
    }
    else if(turn == 'o' && draw == false){
        cout<<"Congratulations!Player with 'O' has won the game\n";
    }
    else
    cout<<"GAME DRAW!!!\n";
} 
