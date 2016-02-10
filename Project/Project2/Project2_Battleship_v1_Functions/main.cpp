/* 
 * Author: David Macias
 * Created on February 8, 2016, 11:25 AM
 * Purpose: CSC 5 Project 2: Battleship V1
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
void intlGme(unsigned short &, unsigned short &, unsigned short &);
void chgSize(unsigned short &);
void shwRnks();
void drwChar(char [], unsigned short r, unsigned short c, unsigned short shpX, unsigned short shpY, unsigned short shpL);
void rnd(unsigned short &, unsigned short &, unsigned short, unsigned short, unsigned short);
short shp(char a[], unsigned short, unsigned short);

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
    
    unsigned short strkCnt = 0;          //Strike Counter
    unsigned short hitCnt = 0;           //Hit Counter
    unsigned short rowIn;                //User input for the row
    unsigned short dfflty = 1;           //Difficulty of the game / Automatically set to 1 at the start of game
    
    char lttrIn;                         //User input for the column
    bool hit = false;                    //Boolean value becomes true when a ship is hit
    bool quit = false;                   //Boolean value becomes true when the user quits the game
    bool jstStrt = true;                 //Boolean value becomes false after first input is made
    
    string intl;                         //User's initials
   
    ofstream out;                        //Output stream Game scores
    
    
    //Open the Scores file
    out.open("Battleship Scores.dat",ios::app);
    
    //Start the Game!
    intlGme(dfflty, rows, clmns);
    
    //Randomize locations for each ship
    rnd(shipX1, shipY1, shipL1, rows, clmns);
    rnd(shipX2, shipY2, shipL2, rows, clmns);
    rnd(shipX3, shipY3, shipL3, rows, clmns);
    rnd(shipX4, shipY4, shipL4, rows, clmns);
    rnd(shipX5, shipY5, shipL5, rows, clmns);
    
    //Set the index sizes of the arrays
    char shpGrid [rows][clmns] = {};     //Size of the 2 dimensional ship array
    char usrGrid [rows][clmns] = {};     //Size of the 2 dimensional User array
  
    //Draw each ship with its length in the selected array size
    drwChar(shpGrid[0], rows, clmns, shipX1, shipY1, shipL1);
    drwChar(shpGrid[0], rows, clmns, shipX2, shipY2, shipL2);
    drwChar(shpGrid[0], rows, clmns, shipX3, shipY3, shipL3);
    drwChar(shpGrid[0], rows, clmns, shipX4, shipY4, shipL4);
    drwChar(shpGrid[0], rows, clmns, shipX5, shipY5, shipL5);
    
    //Read how many O's there are to determine game end
    shpCnt = shp(shpGrid[0], rows, clmns);
    

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
    shwRnks();
            
    //Exit stage right
    out.close();
    return 0;
}

/******************************************************************************/
/******************************************************************************/
/******************************************************************************/
void intlGme(unsigned short &size, unsigned short &row, unsigned short &clmn){
    unsigned short menuNum;  //Initial menu option input
    bool modeSet = false;    //Boolean value becomes true after the initial menu
    
    while(!modeSet){
        cout <<setw(30) <<"BATTLESHIP!" <<endl;
        cout <<endl <<"    1.Difficulty: " 
                <<(size == 1?"Easy":
                    size == 2?"Medium":
                        size == 3?"Hard":"Difficulty not set");
        cout <<"  2.Start Game" 
                "   3.Ranks" <<endl;
        cout <<endl <<"Enter 1 to change Difficulty, 2 to start the Game"<<endl;
        cout <<"       Or 3 to see the Score Rankings." <<endl;
        cin >>menuNum;

        //Change Difficulty
        if(menuNum == 1){
            chgSize(size);
        }else if(menuNum == 3){
            shwRnks();
        }else{
            modeSet = true;
        }

        //Set array index according to difficulty
        switch(size){
            case 1:{
                row = 10;
                clmn = 10;
                break;
            }case 2:{
                row = 15;
                clmn = 15;
                break;
            }case 3:{
                row = 20;
                clmn = 20;
                break;
            }default: {
                row = 10;
                clmn = 10;
                break;
            }
        }
    }
}
/******************************************************************************/
/******************************************************************************/
/******************************************************************************/
void chgSize(unsigned short &n){
    cout <<"Enter Difficulty: 1-Easy" <<endl;
            cout <<"                  2-Medium" <<endl;
            cout <<"                  3-Hard" <<endl;
            cin >>n;
}

/******************************************************************************/
/******************************************************************************/
/******************************************************************************/
void shwRnks(){
    ifstream in; 
    string fLine;
    in.open("Battleship Scores.dat");
            while(getline (in,fLine)){
              cout << fLine <<endl;
            }
            in.close();
}

/******************************************************************************/
/******************************************************************************/
/******************************************************************************/
void drwChar(char a[], unsigned short r, unsigned short c, unsigned short shpX,
        unsigned short shpY, unsigned short shpL){
    unsigned short ortn;    //To determine orientation of ships in the ship grid
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(j == shpX && i == shpY){
                ortn = rand()%2+1;
                if(ortn == 2){ 
                    //No overlapping algorithm
                    if(a[i*r+j] == 'O'){
                        do{
                            j++;
                        }while(a[i*r+j] == 'O');
                    }
                    //Drawing ship + length of characters to array
                    while(i < shpY+shpL){
                        a[i*r+j] = 'O';
                        i++;
                    }
                }else{
                    //No overlapping algorithm
                    if(a[i*r+j] == 'O'){
                        do{
                            i++;
                        }while(a[i*r+j] == 'O');
                    }
                    //Drawing ship + length of characters to array
                    while(j < shpX+shpL){
                        a[i*r+j] = 'O';
                        j++;
                    }
                }
            }
        }
    }
}
 

void rnd(unsigned short &shpX, unsigned short &shpY, unsigned short shpL, 
        unsigned short row, unsigned short clmn){
    shpX = rand()%(clmn-shpL+1)+1;
    shpY = rand()%(row-shpL+1)+1;
}

short shp(char a[], unsigned short r, unsigned short c){
    short cnt = 0;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(a[i*j] == 'O'){
                cnt++;
            }
        }
    }
    return cnt;
}