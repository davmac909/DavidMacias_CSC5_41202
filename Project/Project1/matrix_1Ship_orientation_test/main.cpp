/* 
 * Author: David Macias
 * Created on January 26, 2016, 7:55 AM
 * Purpose: Create Matrix
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
    unsigned short rows = 10;
    unsigned short clmns = 10;
    unsigned short shipX;
    unsigned short shipY;
    unsigned short shipL = 6;
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
    
    shipX = rand()%(clmns-shipL+1)+1;
    shipY = rand()%rows+1;
    shipX2 = rand()%(clmns-shipL2+1)+1;
    shipY2 = rand()%rows+1;
    shipX3 = rand()%(clmns-shipL3+1)+1;
    shipY3 = rand()%rows+1;
    shipX4 = rand()%(clmns-shipL4+1)+1;
    shipY4 = rand()%rows+1;
    shipX5 = rand()%(clmns-shipL5+1)+1;
    shipY5 = rand()%rows+1;
    
    cout <<"1 X,Y = " <<shipX <<", " <<shipY <<endl;
    cout <<"2 X,Y = " <<shipX2 <<", " <<shipY2 <<endl;
    cout <<"3 X,Y = " <<shipX3 <<", " <<shipY3 <<endl;
    cout <<"4 X,Y = " <<shipX4 <<", " <<shipY4 <<endl;
    cout <<"5 X,Y = " <<shipX5 <<", " <<shipY5 <<endl;
    //ortn = rand()%2+1;
    cout <<"Orientation = ";
    if(ortn == 1){
        cout <<"Horizontal" <<endl;
    }else{
        cout <<"Vertical" <<endl;
    }
    
    //Draw grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if(j == shipX && i == shipY){
                if(ortn == 2){ 
                    while(i < shipX+shipL){
                        matrix[i][j] = 'O';
                        i++;
                    }
                }else{
                    while(j < shipX+shipL){
                        matrix[i][j] = 'O';
                        j++;
                    }
                }
            }if(j == shipX2 && i == shipY2){
                if(ortn == 2){ 
                    while(i < shipX2+shipL2){
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
                    while(i < shipX3+shipL3){
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
                    while(i < shipX4+shipL4){
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
                    while(i < shipX5+shipL5){
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
