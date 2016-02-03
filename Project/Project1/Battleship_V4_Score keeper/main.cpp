/* 
 * Author: David Macias
 * Created on January 25, 2016, 11:28 PM
 * Purpose: CSC 5 Project 1: Battleship
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random time seed
    srand(static_cast<int>(time(0)));
    
    //Declare and initialize variables
    unsigned short rows;            //Number of Rows in both Grids
    unsigned short clmns;           //Number of Columns in both Grids
    unsigned short shipX1, shipX2, shipX3, shipX4, shipX5; //Second index for the 2 dimensional array
    unsigned short shipY1, shipY2, shipY3, shipY4, shipY5; //First index for the 2 dimensional array
    unsigned short shipL1 = 6, shipL2 = 4;           //The length for ships 1 and 2
    unsigned short shipL3 = 4, shipL4 = 3;           //The length for ships 3 and 4
    unsigned short shipL5 = 2;           //The length for ship 5
    unsigned short shpCnt = 0;           //Ship counter
    unsigned short ortn;                 //To determine orientation of ships in the ship grid
    unsigned short strkCnt = 0;          //Strike Counter
    unsigned short hitCnt = 0;           //Hit Counter
    unsigned short rowIn;                //User input for the row
    unsigned short dfflty = 1;           //Difficulty of the game / Automatically set to 1 at the start of game
    unsigned short menuNum;              //Initial menu option input
    char lttrIn;                         //User input for the column
    bool hit = false;                    //Boolean value becomes true when a ship is hit
    bool quit = false;                   //Boolean value becomes true when the user quits the game
    bool jstStrt = true;                 //Boolean value becomes false after first input is made
    bool modeSet = false;                //Boolean value becomes true after the initial menu
    string intl;                         //User's initials
    string fLine;
    ofstream out;                        //Output stream Game scores
    ifstream in; 
    
    //Open the Scores file
    out.open("Battleship Scores.dat",ios::app);
    
    //Start the Game!
    while(!modeSet){
        cout <<setw(30) <<"BATTLESHIP!" <<endl;
        cout <<endl <<"    1.Difficulty: " 
                <<(dfflty == 1?"Easy":
                    dfflty == 2?"Medium":
                        dfflty == 3?"Hard":"Difficulty not set");
        cout <<"  2.Start Game" 
                "   3.Ranks" <<endl;
        cout <<"Enter 1 to change Difficulty or 2 to start the Game." <<endl;
        cin >>menuNum;

        //Change Difficulty
        if(menuNum == 1){
            cout <<"Enter Difficulty: 1-Easy" <<endl;
            cout <<"                  2-Medium" <<endl;
            cout <<"                  3-Hard" <<endl;
            cin >>dfflty;
        }else if(menuNum == 3){
            in.open("Battleship Scores.dat");
            while(getline (in,fLine)){
              cout << fLine << '\n';
            }
            in.close();
        }else{
            modeSet = true;
        }

        //Set array index according to difficulty
        switch(dfflty){
            case 1:{
                rows = 10;
                clmns = 10;
                break;
            }case 2:{
                rows = 15;
                clmns = 15;
                break;
            }case 3:{
                rows = 20;
                clmns = 20;
                break;
            }default: {
                rows = 10;
                clmns = 10;
                break;
            }
        }
    }
    
    //Set the index sizes of the arrays
    char shpGrid [rows][clmns] = {};     //Size of the 2 dimensional ship array
    char usrGrid [rows][clmns] = {};     //Size of the 2 dimensional User array
    
    //Randomize ship locations
    shipX1 = rand()%(clmns-shipL1+1)+1;
    shipY1 = rand()%(rows-shipL1+1)+1;
    shipX2 = rand()%(clmns-shipL2+1)+1;
    shipY2 = rand()%(rows-shipL2+1)+1;
    shipX3 = rand()%(clmns-shipL3+1)+1;
    shipY3 = rand()%(rows-shipL3+1)+1;
    shipX4 = rand()%(clmns-shipL4+1)+1;
    shipY4 = rand()%(rows-shipL4+1)+1;
    shipX5 = rand()%(clmns-shipL5+1)+1;
    shipY5 = rand()%(rows-shipL5+1)+1;

    //Draw Ship 1 in Ship Grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX1 && i == shipY1){
                ortn = rand()%2+1;
                if(ortn == 2){ 
                    while(i < shipY1+shipL1){
                        shpGrid[i][j] = 'O';
                        i++;
                    }
                }else{
                    while(j < shipX1+shipL1){
                        shpGrid[i][j] = 'O';
                        j++;
                    }
                }
            }
        }
    }
    
    //Draw Ship 2 Ship Grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX2 && i == shipY2){
                ortn = rand()%2+1;
                if(ortn == 2){ 
                    if(shpGrid[i][j] == 'O'){
                        do{
                            j++;
                        }while(shpGrid[i][j] == 'O');
                    }
                    while(i < shipY2+shipL2){
                        shpGrid[i][j] = 'O';
                        i++;
                    }
                }else{
                    if(shpGrid[i][j] == 'O'){
                        do{
                            i++;
                        }while(shpGrid[i][j] == 'O');
                    }
                    while(j < shipX2+shipL2){
                        shpGrid[i][j] = 'O';
                        j++;
                    }
                }
            }
        }
    }
    
    //Draw Ship 3 Ship Grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX3 && i == shipY3){
                ortn = rand()%2+1;
                if(ortn == 2){ 
                    if(shpGrid[i][j] == 'O'){
                        do{
                            j++;
                        }while(shpGrid[i][j] == 'O');
                    }
                    while(i < shipY3+shipL3){
                        shpGrid[i][j] = 'O';
                        i++;
                    }
                }else{
                    if(shpGrid[i][j] == 'O'){
                        do{
                            i++;
                        }while(shpGrid[i][j] == 'O');
                    }
                    while(j < shipX3+shipL3){
                        shpGrid[i][j] = 'O';
                        j++;
                    }
                }
            }
        }
    }
    
    //Draw Ship 4 Ship Grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX4 && i == shipY4){
                ortn = rand()%2+1;
                if(ortn == 2){ 
                    if(shpGrid[i][j] == 'O'){
                        do{
                            j++;  
                        }while(shpGrid[i][j] == 'O');
                    }
                    while(i < shipY4+shipL4){
                        shpGrid[i][j] = 'O';
                        i++;
                    }
                }else{
                    if(shpGrid[i][j] == 'O'){
                        do{
                            i++;  
                        }while(shpGrid[i][j] == 'O');
                    }
                    while(j < shipX4+shipL4){
                        shpGrid[i][j] = 'O';
                        j++; 
                    }
                }
            }
        }
    }
    
    //Draw Ship 5 Ship Grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX5 && i == shipY5){
                ortn = rand()%2+1;
                if(ortn == 2){ 
                    if(shpGrid[i][j] == 'O'){
                        do{
                            j++;   
                        }while(shpGrid[i][j] == 'O');
                    }
                    while(i < shipY5+shipL5){
                        shpGrid[i][j] = 'O';
                        i++;
                    }
                }else{
                    if(shpGrid[i][j] == 'O'){
                        do{
                            i++;   
                        }while(shpGrid[i][j] == 'O');
                    }
                    while(j < shipX5+shipL5){
                        shpGrid[i][j] = 'O';
                        j++;
                    }
                }
            }
        }
    }
    
    //Read how many O's there are to determine game end
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(shpGrid[i][j] == 'O'){
                shpCnt++;
            }
        }
    }

    //Fill the rest of the Ship Grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(!(shpGrid[i][j] == 'O')){
                shpGrid[i][j] = '~';
            }
        }
    }
    
    
    //Fill out the User Grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
                usrGrid[i][j] = '~';      //Character to fill the board with
        }
    }
    
    //Start the time
    int begT = static_cast<int>(time(0));
    
    //Print out the User Grid and Play the Game!
    do{
        cout <<"  ";
        for(int k=1, f=65; k <= clmns; k++, f++){
            cout <<" " <<static_cast<char>(f);       //Print Letters for Columns
        }
        cout <<endl;
        for(int i = 1, t = 1; i <= rows; i++, t++) {
            cout <<setw(2) <<t;            //Print the number indicating the row
            for(int j = 1; j <= clmns; j++) {
                if(i == rowIn && j == static_cast<int>(lttrIn)-64){
                    if(shpGrid[rowIn][static_cast<int>(lttrIn)-64] == 'O'){
                        usrGrid[i][j] = 'H';
                        shpCnt--;
                        strkCnt++;
                        hitCnt++;
                        hit = true;
                    }else{
                        usrGrid[i][j] = 'X';
                        strkCnt++;
                    }
                }
                cout <<" " <<usrGrid[i][j]; 
            }
            cout <<(i == 2?"          HITS NEEDED TO SINK ENEMY SHIPS":
                i == 3?"          Ship 1 -6 Hits     Ship 2 -4 Hits     Ship 3 -4 Hits":
                    i == 4?"          Ship 4 -3 Hits     Ship 5 -2 Hits":
                        i == 6?"          LEGEND":
                            i == 7?"          H - Hit":
                                i == 8?"          X - Miss":"");
            cout <<endl;
        }
        
        //Check if all the ship indices were hit
        if(shpCnt == 0){
            cout <<"You won! You sunk all the enemies ships!" <<endl;
        }
        
        //Check if a hit was made
        if (hit){
            cout <<endl;
            cout <<"You got a hit! That leaves " <<shpCnt <<" hits still needed"
                    " to win!" <<endl;
            hit = false;
         }else{
            if(jstStrt){
                cout <<endl <<"There are " <<shpCnt 
                    <<" hits needed to win!" <<endl;
                jstStrt = false;
            }else{
                cout <<endl <<"Miss! There are still " <<shpCnt 
                    <<" hits needed to win!" <<endl;
            }
         }
        
        //Input the index of the strike that is to be made
        cout <<"Enter the Letter of the column and row number you wish to strike"
                " (i.e. A1)." <<endl;
        cout <<"Or Enter two zeros to quit." <<endl;
        cin >>lttrIn >>rowIn;
        lttrIn = toupper(lttrIn);
        if (static_cast<int>(lttrIn) == 48 && rowIn == 0){
            quit = true;
        }      
    }while(!quit);
    
    //End the time
    int endT = static_cast<int>(time(0));
    
    //If user quits show them the ship Grid
    if(quit){
        cout <<"Good try! GAME OVER" <<endl;
        cout <<"  ";
        for(int k=1, f=65; k <= clmns; k++, f++){
            cout <<" " <<static_cast<char>(f);       //Print Letters for Columns
        }
        cout <<endl;
        for(int i = 1, t = 1; i <= rows; i++, t++) {
            cout <<setw(2) <<t;            //Print the number indicating the row
            for(int j = 1; j <= clmns; j++) {
                cout <<" " <<shpGrid[i][j]; 
            }
            cout <<endl;
        }
    }
    
    //Output the hit to strike ratio
    cout <<strkCnt <<" Strikes were ordered and " <<hitCnt 
            <<" hits were made." <<endl;
    cout <<"That means for 1 hit " <<strkCnt*1.0f/hitCnt 
            <<" strikes were made." <<endl;;
    
    //Get the user's initials for the Scores
    cout <<endl <<"Enter your initials" <<endl;
    cin >>intl;
            
    //Output scores to file
    out<<setw(8) <<intl <<setw(15) 
            <<(dfflty == 1?"Easy":
                dfflty == 2?"Medium":"Hard")<<setw(20) <<strkCnt <<setw(10)
            <<hitCnt <<setw(10) <<strkCnt*1.0f/hitCnt <<setw(10) 
            <<endT-begT <<endl;
    
    //Display the Ranks on the Screen
    in.open("Battleship Scores.dat");
            while(getline (in,fLine)){
              cout << fLine << '\n';
            }
            in.close();
            
    //Exit stage right
    out.close();
    return 0;
}