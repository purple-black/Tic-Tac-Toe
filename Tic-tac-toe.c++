#include <iostream>
using namespace std;

//global variables
char pos[3][3] = {{'1','2','3'}, {'4','5','6'},{'7','8','9'}};
string player1 = "";
string player2 = "";
int num;
bool status = false;
bool win = false;

void playGame1(){
    cout << "Hey "<<player1<<" enter the position: ";
    cin >> num;
        switch (num)
        {
        case 1:
            if(pos[0][0]!='X' && pos[0][0]!='O'){
                pos[0][0]='X';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 2:
            if(pos[0][1]!='X' || pos[0][1]!='O'){
                pos[0][1]='X';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 3:
            if(pos[0][2]!='X' || pos[0][2]!='O'){
                pos[0][2]='X';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 4:
            if(pos[1][0]!='X' || pos[1][0]!='O'){
                pos[1][0]='X';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 5:
            if(pos[1][1]!='X' || pos[1][1]!='O'){
                pos[1][1]='X';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 6:
            if(pos[1][2]!='X' || pos[1][2]!='O'){
                pos[1][2]='X';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 7:
            if(pos[2][0]!='X' || pos[2][0]!='O'){
                pos[2][0]='X';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 8:
            if(pos[2][1]!='X' || pos[2][1]!='O'){
                pos[2][1]='X';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 9:
            if(pos[2][2]!='X' || pos[2][2]!='O'){
                pos[2][2]='X';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        
        default:
            cout << "invalid position!, please enter again."<< endl;
            break;
        }
        return;
}

void playGame2(){
    cout << "Hey "<<player2<<" enter the position: ";
    cin >> num;
        switch (num)
        {
        case 1:
            if(pos[0][0]!='X' || pos[0][0]!='O'){
                pos[0][0]='O';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 2:
            if(pos[0][1]!='X' || pos[0][1]!='O'){
                pos[0][1]='O';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 3:
            if(pos[0][2]!='X' || pos[0][2]!='O'){
                pos[0][2]='O';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 4:
            if(pos[1][0]!='X' || pos[1][0]!='O'){
                pos[1][0]='O';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 5:
            if(pos[1][1]!='X' || pos[1][1]!='O'){
                pos[1][1]='O';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 6:
            if(pos[1][2]!='X' || pos[1][2]!='O'){
                pos[1][2]='O';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 7:
            if(pos[2][0]!='X' || pos[2][0]!='O'){
                pos[2][0]='O';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 8:
            if(pos[2][1]!='X' || pos[2][1]!='O'){
                pos[2][1]='O';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        case 9:
            if(pos[2][2]!='X' || pos[2][2]!='O'){
                pos[2][2]='O';
            }
            else{
                cout << "position already occupied !! enter another position";
            }
            break;
        
        default:
            cout << "invalid position!, please enter again."<< endl;
            break;
        }
        return;
}


void Display(){

    cout << "   |"<<"   |"<<"   "<<endl;
    cout << " "<<pos[0][0]<<" |"<<" "<<pos[0][1]<<" |"<<" "<<pos[0][2]<<endl;
    cout << "___|"<<"___|"<<"___"<<endl;
    cout << "   |"<<"   |"<<"   "<<endl;
    cout << " "<<pos[1][0]<<" |"<<" "<<pos[1][1]<<" |"<<" "<<pos[1][2]<<endl;
    cout << "___|"<<"___|"<<"___"<<endl;
    cout << "   |"<<"   |"<<"   "<<endl;
    cout << " "<<pos[2][0]<<" |"<<" "<<pos[2][1]<<" |"<<" "<<pos[2][2]<<endl;
    cout << "   |"<<"   |"<<"   "<<endl;

    for(int i = 0; i<3; i++){
        if(pos[i][0]==pos[i][1] && pos[i][0]==pos[i][2]){
            status = true;
            if(pos[i][0]=='X'){
                cout << "Congrats "<<player1<<"! You won !!"<<endl;
                win = true;
                return;
            }
            else if(pos[i][0]=='O'){
                cout << "Congrats "<<player2<<"! You won !!"<<endl;
                win = true;
                return;
            }
        }
        else if(pos[0][i]==pos[1][i] && pos[0][i]==pos[2][i]){
            status = true;
            if(pos[0][i]=='X'){
                cout << "Congrats "<<player1<<"! You won !!"<<endl;
                win = true;
                return;
            }
            else if(pos[0][i]=='O'){
                cout << "Congrats "<<player2<<"! You won !!"<<endl;
                win = true;
                return;
            }
        }
    }

    if(pos[0][0]==pos[1][1] && pos[0][0]==pos[2][2]){
        status = true;
        if(pos[0][0]=='X'){
            cout << "Congrats "<<player1<<"! You won !!"<<endl;
            win = true;
            return;
        }
        else if(pos[0][0]=='O'){
            cout << "Congrats "<<player2<<"! You won !!"<<endl;
            win = true;
            return;
        }
    }
    else if(pos[0][2]==pos[1][1] && pos[0][2]==pos[2][0]){
        status = true;
        if(pos[0][2]=='X'){
            cout << "Congrats "<<player1<<"! You won !!"<<endl;
            win = true;
            return;
        }
        else if(pos[0][2]=='O'){
            cout << "Congrats "<<player2<<"! You won !!"<<endl;
            win = true;
            return;
        }
    }
    status = true;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if (pos[i][j] != 'X' && pos[i][j] != 'O'){
                status = false;
            }
        }
    }

    

    return;
}


int main(){

    cout << "WELCOME TO TIC-TAC-TOE !!"<<endl;
    cout << "enter the name of the first player: "<<endl;
    getline(cin,player1);
    cout << "enter the name of the second player: "<<endl;
    getline(cin,player2);
    cout << player1 << " can start the game and then " << player2 << " can play. 'X' is for "<<player1<<" and 'O' is for "<<player2<< endl;
    Display();

while(status ==  false && win  == false){
    if(status == false){
        playGame1();
        Display();
        if(status == false){
        playGame2();
        Display();
      }
    }

}


   

if(status == true && win == false){
        cout << "TIE !!! GAME OVER"<< endl;
    }

    return 0;
}