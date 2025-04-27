#include<iostream>
using namespace std;

int choice;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char TURN = 'X';
int row,column;


void display(){

    system("cls");

    cout<< "\t\t            --TIC TAC TOE--          \n\n"<<endl;
    cout<<"\t\t--> PLAYER1 [X]\n";
    cout<<"\t\t--> PLAYER2 [O]\n";
    cout<<"\n\n";

    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  "<<endl;
    cout<<"\t\t_____|_____|_____"<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  "<<endl;
    cout<<"\t\t_____|_____|_____"<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  "<<endl;
    cout<<"\t\t     |     |     "<<endl;
}

void player_turn(){

    bool valid_move = false;

    while(!valid_move){
        cout<<"\nplayer "<<(TURN=='X'?"1":"2")<<"["<<TURN<<"] TURN: ";
    cin>>choice;

    switch(choice){
        case 1: 
        row =0; column =0;
        break;
        case 2:
        row =0; column =1;
        break;
        case 3:
        row =0; column =2;
        break;
        case 4:
        row =1; column =0;
        break;
        case 5:
        row =1; column =1;
        break;
        case 6:
        row =1; column =2;
        break;
        case 7:
        row =2; column =0;
        break;
        case 8:
        row =2; column =1;
        break;
        case 9:
        row =2; column =2;
        break;
        default:
        cout<<"\n\tInvalid choice. Please choose a number between 1 and 9.\n";
        continue;
    }
    if (board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = TURN;
        valid_move = true;
    } else {
        cout << "\n\tInvalid move. Please choose an empty space.\n";
    }
}
    display();
}


bool game_over(){
    for(int i = 0; i < 3; i++){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            return false;
        }
    }

    for(int i = 0; i < 3; i++){
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            return false;
        }
    }

    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
        return false;
    }

    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]){
        return false;
    }

    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            if(board[i][j] != 'X' && board[i][j] != 'O'){
                return true;
            }
        }
    }

    cout<<"\n\tGAME DRAW !"<<endl;
    return false;
}



int main() {
    display();

    while (game_over()) {
        player_turn();
        TURN = (TURN == 'X') ? 'O' : 'X';
    }

    return 0;
}