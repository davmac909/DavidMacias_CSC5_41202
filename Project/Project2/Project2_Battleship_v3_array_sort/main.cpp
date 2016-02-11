//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//User Libraries
#include "game.h"

//Global Constants
const unsigned short CLMNS = 30;

//Function Prototypes
void intlGme(string &, unsigned short &);
void chgSize(string &, unsigned short &);
void shwRnks();
void drwChar(char [][CLMNS], unsigned short, unsigned short, unsigned short, unsigned short);
void rnd(unsigned short &, unsigned short &, unsigned short, unsigned short);
void filGrid(char [][CLMNS], unsigned short);
void prntGrd(char [][CLMNS], unsigned short );
void cmpAry(char [][CLMNS], char [][CLMNS], unsigned short, char, unsigned short &, int &, int &, bool &);
void getIndx(char &, unsigned short &, bool &);
void dspMsg(bool , bool &, unsigned short);
short sCnt(char [][CLMNS], unsigned short);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random time seed
    srand(static_cast<int> (time(0)));

    //Declare and initialize variables
    const unsigned short ROWS = 30; //Number of ROWS in both Grids
    unsigned short row_col = 10; //Initial number of rows and columns at game start
    unsigned short shipX1, shipX2, shipX3, shipX4, shipX5; //Second index for the 2 dimensional array
    unsigned short shipY1, shipY2, shipY3, shipY4, shipY5; //First index for the 2 dimensional array
    unsigned short shipL1 = 6, shipL2 = 4; //The length for ships 1 and 2
    unsigned short shipL3 = 4, shipL4 = 3; //The length for ships 3 and 4
    unsigned short shipL5 = 2; //The length for ship 5
    unsigned short shpCnt = 0; //Ship counter
    unsigned short rowIn; //User input for the row
    char lttrIn; //User input for the column
    bool hit = false; //Boolean value becomes true when a ship is hit
    bool quit = false; //Boolean value becomes true when the user quits the game
    bool jstStrt = true; //Boolean value becomes false after first input is made
    bool endGame = false;//Boolean value becomes true after shpCnt == 0
    char shpGrid [ROWS][CLMNS] = {}; //Size of the 2 dimensional ship array
    char usrGrid [ROWS][CLMNS] = {}; //Size of the 2 dimensional User array
    ofstream out; //Output stream Game scores
    Game game;
    game.mode = "Easy";   //Initial game difficulty
    game.strikes = 0;     //Strike counter
    game.hits = 0;        //Hit counter

    //Open the Scores file
    out.open("Battleship Scores.dat", ios::app);

    //Display the Initialization menu
    intlGme(game.mode, row_col);
    
    //Randomize locations for each ship
    rnd(shipX1, shipY1, shipL1, row_col);
    rnd(shipX2, shipY2, shipL2, row_col);
    rnd(shipX3, shipY3, shipL3, row_col);
    rnd(shipX4, shipY4, shipL4, row_col);
    rnd(shipX5, shipY5, shipL5, row_col);

    //Draw each ship with its length in the selected array size
    drwChar(shpGrid, row_col, shipX1, shipY1, shipL1);
    drwChar(shpGrid, row_col, shipX2, shipY2, shipL2);
    drwChar(shpGrid, row_col, shipX3, shipY3, shipL3);
    drwChar(shpGrid, row_col, shipX4, shipY4, shipL4);
    drwChar(shpGrid, row_col, shipX5, shipY5, shipL5);

    //Read how many O's there are to determine game end
    shpCnt = sCnt(shpGrid, row_col);

    //Fill the rest of the Ship Grid and the User Grid
    filGrid(shpGrid, row_col);
    filGrid(usrGrid, row_col);

    //Start the game
    do {
        //Compare user to ship array and change user array
        cmpAry(usrGrid, shpGrid, rowIn, lttrIn, shpCnt, game.strikes, game.hits, hit);
        
        //Print the user array
        prntGrd(usrGrid, row_col);
        
        //Display the message to the user
        dspMsg(hit, jstStrt, shpCnt);

        //Get the index to strike
        getIndx(lttrIn, rowIn, quit);
        
    } while (!quit);

    //If user quits show them the ship Grid
    if (quit) {
        cout << "GAME OVER" << endl;
        cout << "  ";
        for (int k = 1, f = 65; k <= row_col; k++, f++) {
            cout << " " << static_cast<char> (f); //Print Letters for Columns
        }
        cout << endl;
        for (int i = 1, t = 1; i <= row_col; i++, t++) {
            cout << setw(2) << t; //Print the number indicating the row
            for (int j = 1; j <= row_col; j++) {
                cout << " " << shpGrid[i][j];
            }
            cout << endl;
        }
    }

    //Calculate the hit to strike ratio
    game.ratio = game.strikes * 1.0f / game.hits;

    //Output the hit to strike ratio
    cout << game.strikes << " Strikes were ordered and " << game.hits
            << " hits were made." << endl;
    cout << "That means for 1 hit " << game.ratio
            << " strikes were made." << endl;

    //Get the user's initials for the Scores
    cout << endl << "Enter your initials" << endl;
    cin >> game.player;

    //Output scores to file
    out << setw(8) << game.player << setw(15)
            << game.mode << setw(20) << game.strikes << setw(10)
            << game.hits << setw(10) << game.ratio << setw(10) << endl;

    //Display the Ranks on the Screen
    shwRnks();

    //Exit stage right
    out.close();
    return 0;
}

/******************************************************************************/
/**********************Display Initial Game Menu*******************************/
//Inputs:
//  size->Difficulty of game
//  rc->Number of rows and columns
/******************************************************************************/
void intlGme(string &size, unsigned short &rc) {
    unsigned short menuNum; //Initial menu option input
    bool modeSet = false; //Boolean value becomes true after the initial menu

    while (!modeSet) {
        cout << setw(30) << "BATTLESHIP!" << endl;
        cout << endl << "    1.Difficulty: " << size;
        cout << "  2.Start Game"
                "   3.Ranks" << endl;
        cout << endl << "Enter 1 to change Difficulty, 2 to start the Game" << endl;
        cout << "       Or 3 to see the Score Rankings." << endl;
        cin >>menuNum;

        //Change Difficulty
        if (menuNum == 1) {
            chgSize(size, rc);
        } else if (menuNum == 3) {
            shwRnks();
        } else {
            modeSet = true;
        }
    }
}
/******************************************************************************/
/******************************************************************************/
//Inputs:
//  n->Difficulty of game
//  r_c->Number of rows and columns
/******************************************************************************/
void chgSize(string &n, unsigned short &r_c) {
    short in;
    cout << "Enter Difficulty: 1-Easy" << endl;
    cout << "                  2-Medium" << endl;
    cout << "                  3-Hard" << endl;
    cin >>in;

    switch (in) {
        case 1:{
            n = "Easy";
            r_c = 10;
            break;
        }case 2:{
            n = "Medium";
            r_c = 15;
            break;
        }case 3:{
            n = "Hard";
            r_c = 20;
            break;
        }default:{
            n = "Easy";
            r_c = 10;
            break;
        }
    }
}

/******************************************************************************/
/***************************Show Ranks*****************************************/
/******************************************************************************/
void shwRnks(){
    ifstream in;
    string fLine;
    in.open("Battleship Scores.dat");
    while (getline(in, fLine)) {
        cout << fLine << endl;
    }
    in.close();
}

/******************************************************************************/
/*****************************Dray Array***************************************/
//Inputs:
//  a->2 dimensional array
//  r->Number of rows and columns
//  shpX->Column index of ship
//  shpY->Row index of ship
//  shipL->Length of characters of ship
/******************************************************************************/
void drwChar(char a[][CLMNS], unsigned short r, unsigned short shpX,
        unsigned short shpY, unsigned short shpL) {
    unsigned short ortn; //To determine orientation of ships in the ship grid
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= CLMNS; j++) {
            if (j == shpX && i == shpY) {
                ortn = rand() % 2 + 1;
                if (ortn == 2) {
                    //No overlapping algorithm
                    if (a[i][j] == 'O') {
                        do {
                            j++;
                        } while (a[i][j] == 'O');
                    }
                    //Drawing ship + length of characters to array
                    while (i < shpY + shpL) {
                        a[i][j] = 'O';
                        i++;
                    }
                } else {
                    //No overlapping algorithm
                    if (a[i][j] == 'O') {
                        do {
                            i++;
                        } while (a[i][j] == 'O');
                    }
                    //Drawing ship + length of characters to array
                    while (j < shpX + shpL) {
                        a[i][j] = 'O';
                        j++;
                    }
                }
            }
        }
    }
}

/******************************************************************************/
/*********************Randomize Ship X,Y Location******************************/
//Inputs:
//  row_col->Number of rows and columns
//  shpX->Column index of ship
//  shpY->Row index of ship
//  shipL->Length of chararters of ship
/******************************************************************************/
void rnd(unsigned short &shpX, unsigned short &shpY, unsigned short shpL,
        unsigned short row_col) {
    shpX = rand() % (row_col - shpL + 1) + 1;
    shpY = rand() % (row_col - shpL + 1) + 1;
}

/******************************************************************************/
/************************Ship Character Count**********************************/
//Inputs:
//  a->2 dimensional array
//  r->Number of rows and columns
//Outputs:
//  cnt->Ship character count
/******************************************************************************/
short sCnt(char a[][CLMNS], unsigned short r) {
    short cnt = 0;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= r; j++) {
            if (a[i][j] == 'O') {
                cnt++;
            }
        }
    }
    return cnt;
}

/******************************************************************************/
/*******************************Fill Array*************************************/
//Inputs:
//  a->2 dimensional array
//  r->Number of rows and columns
/******************************************************************************/
void filGrid(char a[][CLMNS], unsigned short rc){
    for (int i = 1; i <= rc; i++) {
        for (int j = 1; j <= rc; j++) {
            if (!(a[i][j] == 'O')) {
                a[i][j] = '~';
            }
        }
    }
}

/******************************************************************************/
/*************************Print Array******************************************/
//Inputs:
//  a->2 dimensional array
//  r->Number of rows and columns
/******************************************************************************/
void prntGrd(char a[][CLMNS], unsigned short rc){
    cout << "  ";
    for (int k = 1, f = 65; k <= rc; k++, f++) {
        cout << " " << static_cast<char> (f); //Print Letters for Columns
    }
    cout << endl;
    for (int i = 1, t = 1; i <= rc; i++, t++) {
        cout << setw(2) << t; //Print the number indicating the row
        for (int j = 1; j <= rc; j++) {
            cout << " " << a[i][j];
        }
        cout <<(i == 2 ? "          HITS NEEDED TO SINK ENEMY SHIPS" :
                i == 3 ? "          Ship 1 -6 Hits     Ship 2 -4 Hits     Ship 3 -4 Hits" :
                i == 4 ? "          Ship 4 -3 Hits     Ship 5 -2 Hits" :
                i == 6 ? "          LEGEND" :
                i == 7 ? "          H - Hit" :
                i == 8 ? "          X - Miss" : "");
        cout << endl;
    }
}

/******************************************************************************/
/*************************Compare Arrays***************************************/
//Inputs:
//  a->2 dimensional array
//  b->Second 2 dimensional Array
//  rIn->Row number inputted from user
//  cIn->Letter inputted from user
//  sCnt->Ship Character Count
//  str->Strike Count
//  hts->Hit Count
//  ht->Hit Boolean
/******************************************************************************/
void cmpAry(char a[][CLMNS], char b[][CLMNS], unsigned short rIn, char cIn, 
        unsigned short &sCnt, int &str, int &hts, bool &ht){
    if (b[rIn][static_cast<int> (cIn) - 64] == 'O') {
        a[rIn][static_cast<int> (cIn) - 64] = 'H';
        sCnt--;
        str++;
        hts++;
        ht = true;
    } else {
        a[rIn][static_cast<int> (cIn) - 64] = 'X';
        str++;
    }
}

/******************************************************************************/
/*************************Get Index********************************************/
//Inputs:
//  rIn->Row number inputted from user
//  cIn->Letter inputted from user
//  stop->Quit Boolean
/******************************************************************************/
void getIndx(char &cIn, unsigned short &rIn, bool &stop){
    cout << "Enter the Letter of the column and row number you wish to strike"
            " (i.e. A1)." << endl;
    cout << "Or Enter two zeros to quit." << endl;
    cin >> cIn >>rIn;
    cIn = toupper(cIn);
    if (static_cast<int> (cIn) == 48 && rIn == 0) {
        stop = true;
    }
}

/******************************************************************************/
/*************************Display Message**************************************/
//Inputs:
//  h->Hit Boolean
//  strt->Game Just Started Boolean
//  sCnt->Ship character count
/******************************************************************************/
void dspMsg(bool h, bool &strt, unsigned short sCnt){
    //Check if all the ship indices were hit
    if (sCnt == 0) {
        cout << "You won! You sunk all the enemies ships!" << endl;
    }
    if (h) {
        cout << endl;
        cout << "You got a hit! That leaves " << sCnt << " hits still needed"
                " to win!" << endl;
        h = false;
    } else {
        if (strt) {
            cout << endl << "There are " << sCnt
                    << " hits needed to win!" << endl;
            strt = false;
        } else {
            cout << endl << "Miss! There are still " << sCnt
                    << " hits needed to win!" << endl;
        }
    }
}