/* 
 * Author: David Macias
 * Created on January 25, 2016, 11:28 PM
 * Purpose: CSC 5 Project 1: Battleship!
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random time seed
    srand(static_cast<int>(time(0)));
    
    //Declare and initialize variables
    unsigned short rows = 15;
    unsigned short clmns = 15;
    unsigned short shipX1;
    unsigned short shipY1;
    unsigned short shipL1 = 6;
    unsigned short shipX2;
    unsigned short shipY2;
    unsigned short shipL2 = 4;
    unsigned short shipX3;
    unsigned short shipY3;
    unsigned short shipL3 = 4;
    unsigned short shipX4;
    unsigned short shipY4;
    unsigned short shipL4 = 3;
    unsigned short shipX5;
    unsigned short shipY5;
    unsigned short shipL5 = 2;
    unsigned short ortn;
    
    char matrix [rows][clmns] = {};
    
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
    
    cout <<"1 X,Y = " <<shipX1 <<", " <<shipY1 <<endl;
    cout <<"2 X,Y = " <<shipX2 <<", " <<shipY2 <<endl;
    cout <<"3 X,Y = " <<shipX3 <<", " <<shipY3 <<endl;
    cout <<"4 X,Y = " <<shipX4 <<", " <<shipY4 <<endl;
    cout <<"5 X,Y = " <<shipX5 <<", " <<shipY5 <<endl;
    
    
    cout <<"Orientation = ";
    if(ortn == 1){
        cout <<"Horizontal" <<endl;
    }else{
        cout <<"Vertical" <<endl;
    }
    
    //Draw grid
    for(int i = 1; i <= rows; i++){
        
        for(int j = 1; j <= clmns; j++){
            
            if(j == shipX1 && i == shipY1){
                if(ortn == 2){ 
                    while(i < shipY1+shipL1){
                        matrix[i][j] = 'O';
                        i++;
                    }
                }else{
                    while(j < shipX1+shipL1){
                        matrix[i][j] = 'O';
                        j++;
                    }
                }
            }if(j == shipX2 && i == shipY2){
                if(ortn == 2){ 
                    while(i < shipY2+shipL2){
                        matrix[i][j] = 'O';
                        i++;
                    }
                }else{
                    while(j < shipX2+shipL2){
                        matrix[i][j] = 'O';
                        j++;
                    }
                }
            }if(j == shipX3 && i == shipY3){
                if(ortn == 2){ 
                    while(i < shipY3+shipL3){
                        matrix[i][j] = 'O';
                        i++;
                    }
                }else{
                    while(j < shipX3+shipL3){
                        matrix[i][j] = 'O';
                        j++;
                    }
                }
            }if(j == shipX4 && i == shipY4){
                if(ortn == 2){ 
                    while(i < shipY4+shipL4){
                        matrix[i][j] = 'O';
                        i++;
                    }
                }else{
                    while(j < shipX4+shipL4){
                        matrix[i][j] = 'O';
                        j++;
                    }
                }
            }if(j == shipX5 && i == shipY5){
                if(ortn == 2){ 
                    while(i < shipY5+shipL5){
                        matrix[i][j] = 'O';
                        i++;
                    }
                }else{
                    while(j < shipX5+shipL5){
                        matrix[i][j] = 'O';
                        j++;
                    }
                }
            }
              
        }
    }
    
    //Fill the rest of the grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(!(matrix[i][j] == 'O')){
                matrix[i][j] = '~';
            }
        }
    }
    
    //Print out Grid
    cout <<"  ";
    for(int k=1, f=65; k <= clmns; k++, f++){
        cout <<" " <<static_cast<char>(f);
    }
    cout <<endl;
    for(int i = 1, t = 1; i <= rows; i++, t++) {
        cout <<setw(2) <<t;
        for(int j = 1; j <= clmns; j++) {
            cout <<" " <<matrix[i][j]; 
        }
        cout <<endl;
    }

    return 0;
}

//Function Definition
short rndShpX(short x, short i){
    return (rand()%(x-i+1)+1);
}