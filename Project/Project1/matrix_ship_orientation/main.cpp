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
    unsigned int rows;
    unsigned int clmns;
    unsigned int shipX1;
    unsigned int shipY1;
    unsigned int shipL1 = 4;
    unsigned int shipX2;
    unsigned int shipY2;
    unsigned int shipL2 = 3;
    unsigned int shipX3;
    unsigned int shipY3;
    unsigned int shipL3 = 2;
    unsigned int dispX;
    unsigned int dispY;
    unsigned int ortn = rand()%2+1;
    
   
    cout <<"Enter the number of rows" <<endl;
    cin >>rows;
    cout <<"Enter the number of columns" <<endl;
    cin >>clmns;
    
    while(rows > 26 && clmns > 26){
        cout <<"Max grid size is 26x26" <<endl;
        cout <<"Enter the number of rows" <<endl;
        cin >>rows;
        cout <<"Enter the number of columns" <<endl;
        cin >>clmns;
    }

    char matrix [rows][clmns];
    
    shipX1 = rand()%clmns+1;
    shipY1 = rand()%rows+1;
    shipX2 = rand()%clmns+1;
    shipY2 = rand()%rows+1;
    shipX3 = rand()%clmns+1;
    shipY3 = rand()%rows+1;
    
    cout <<"Ship 1 = (" <<shipX1 <<"," <<shipY1 <<")" <<endl;
    cout <<"Ship 2 = (" <<shipX2 <<"," <<shipY2 <<")" <<endl;
    cout <<"Ship 3 = (" <<shipX3 <<"," <<shipY3 <<")" <<endl;

    
    //Draw grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            matrix[i][j] = '~';
            if(j == shipX1 && i == shipY1){
                while(j < shipX1+shipL1){
                matrix[i][j] = 'O';
                    j++;
                }
                matrix[i][j] = '~';
            }else if(j == shipX2 && i == shipY2){
                while(j < shipX2+shipL2){
                matrix[i][j] = 'O';
                
                    j++;
                }
                matrix[i][j] = '~';
            }else if(j == shipX3 && i == shipY3){
                while(j < shipX3+shipL3){
                matrix[i][j] = 'O';
                    j++;
                }
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
    
    //Display Selected coordinate
    bool look = true;
    do{
        cout <<"Whats the x coordinate youd like to display?" <<endl;
        cin >>dispX;
        cout <<"Whats the y coordinate youd like to display?" <<endl;
        cin >>dispY;
        
        if(dispX == 0){
            look = false;
        }
        cout <<matrix[dispY][dispX] <<endl;
        
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
  
    }while(look);

    return 0;
}

//Function Definition
