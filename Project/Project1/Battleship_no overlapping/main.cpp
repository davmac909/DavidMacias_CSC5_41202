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
    unsigned short ortn1;
    unsigned short ortn2;
    unsigned short ortn3;
    unsigned short ortn4;
    unsigned short ortn5;
    int move2 = 0;
    int print2 = 0;
    int move3 = 0;
    int print3 = 0;
    int move4 = 0;
    int print4 = 0;
    int move5 = 0;
    int print5 = 0;
    int k = 0;
    
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
    
    
    
    
  
    
    //Draw Ship 1
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX1 && i == shipY1){
                ortn1 = rand()%2+1;
                if(ortn1 == 2){ 
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
            }
        }
    }
    
    //Draw Ship 2
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX2 && i == shipY2){
                ortn2 = rand()%2+1;
                if(ortn2 == 2){ 
                    if(matrix[i][j] == 'O'){
                        do{
                            j++;
                            move2++;
                        }while(matrix[i][j] == 'O');
                    }
                    while(i < shipY2+shipL2){
                        matrix[i][j] = 'O';
                        i++;
                        print2++;
                    }
                }else{
                    if(matrix[i][j] == 'O'){
                        do{
                            i++;
                            move2++;
                        }while(matrix[i][j] == 'O');
                    }
                    while(j < shipX2+shipL2){
                        matrix[i][j] = 'O';
                        j++;
                        print2++;
                    }
                }
            }
        }
    }
    
    //Draw Ship 3
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX3 && i == shipY3){
                ortn3 = rand()%2+1;
                if(ortn3 == 2){ 
                    if(matrix[i][j] == 'O'){
                        do{
                            j++;
                            move3++;
                        }while(matrix[i][j] == 'O');
                    }
                    while(i < shipY3+shipL3){
                        matrix[i][j] = 'O';
                        i++;
                        print3++;
                    }
                }else{
                    if(matrix[i][j] == 'O'){
                        do{
                            i++;
                            move3++;
                        }while(matrix[i][j] == 'O');
                    }
                    while(j < shipX3+shipL3){
                        matrix[i][j] = 'O';
                        j++;
                        print3++;
                    }
                }
            }
        }
    }
    
    //Draw Ship 4
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX4 && i == shipY4){
                ortn4 = rand()%2+1;
                if(ortn4 == 2){ 
                    if(matrix[i][j] == 'O'){
                        do{
                            j++;
                            move4++;
                        }while(matrix[i][j] == 'O');
                    }
                    while(i < shipY4+shipL4){
                        matrix[i][j] = 'O';
                        i++;
                        print4++;
                    }
                }else{
                    if(matrix[i][j] == 'O'){
                        do{
                            i++;
                            move4++;
                        }while(matrix[i][j] == 'O');
                    }
                    while(j < shipX4+shipL4){
                        matrix[i][j] = 'O';
                        j++;
                        print4++;
                    }
                }
            }
        }
    }
    
    //Draw Ship 5
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX5 && i == shipY5){
                ortn5 = rand()%2+1;
                if(ortn5 == 2){ 
                    if(matrix[i][j] == 'O'){
                        do{
                            j++;
                            move5++;
                        }while(matrix[i][j] == 'O');
                    }
                    while(i < shipY5+shipL5){
                        matrix[i][j] = 'O';
                        i++;
                        print5++;
                    }
                }else{
                    if(matrix[i][j] == 'O'){
                        do{
                            i++;
                            move5++;
                        }while(matrix[i][j] == 'O');
                    }
                    while(j < shipX5+shipL5){
                        matrix[i][j] = 'O';
                        j++;
                        print5++;
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
    
    
    //------------------------------------------------------------------
    cout <<endl <<"Ship 1 X,Y,L = " <<shipX1 <<"," <<shipY1 <<"," <<shipL1 <<" / Orientation = ";
            if(ortn1==1){
                cout <<"Horizontal" <<endl;
            }else{
                cout <<"Vertical" <<endl;
            }
    
    cout <<endl <<"Ship 2 X,Y,L = " <<shipX2 <<"," <<shipY2 <<"," <<shipL2 <<" / Orientation = ";
            if(ortn2==1){
                cout <<"Horizontal" <<endl;
            }else{
                cout <<"Vertical" <<endl;
            }
    cout <<"Ship 2 moved over " <<move2 <<" times" <<endl;
    cout <<"then print 'O' " <<print2 <<" times" <<endl;
    
    cout <<endl <<"Ship 3 X,Y,L = " <<shipX3 <<"," <<shipY3 <<"," <<shipL3 <<" / Orientation = ";
            if(ortn3==1){
                cout <<"Horizontal" <<endl;
            }else{
                cout <<"Vertical" <<endl;
            }
    cout <<"Ship 3 moved over " <<move3 <<" times" <<endl;
    cout <<"then print 'O' " <<print3 <<" times" <<endl;
    
    cout <<endl <<"Ship 4 X,Y,L = " <<shipX4 <<"," <<shipY4 <<"," <<shipL4 <<" / Orientation = ";
            if(ortn4==1){
                cout <<"Horizontal" <<endl;
            }else{
                cout <<"Vertical" <<endl;
            }
    cout <<"Ship 4 moved over " <<move4 <<" times" <<endl;
    cout <<"then print 'O' " <<print4 <<" times" <<endl;
    
    cout <<endl <<"Ship 5 X,Y,L = " <<shipX5 <<"," <<shipY5 <<"," <<shipL5 <<" / Orientation = ";
            if(ortn5==1){
                cout <<"Horizontal" <<endl;
            }else{
                cout <<"Vertical" <<endl;
            }
    cout <<"Ship 5 moved over " <<move5 <<" times" <<endl;
    cout <<"then print 'O' " <<print5 <<" times" <<endl;
    
    return 0;
}

//Function Definition
short rndShpX(short x, short i){
    return (rand()%(x-i+1)+1);
}