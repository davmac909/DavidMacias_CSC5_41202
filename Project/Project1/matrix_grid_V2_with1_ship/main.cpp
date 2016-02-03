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
    //Declare and initialize variables
    unsigned int rows;
    unsigned int clmns;
    unsigned int shipX = 10;
    unsigned int shipY = 10;
    unsigned int shipL = 4;
    
   
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
    
    //Draw grid
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            matrix[i][j] = '~';
            if(j == shipX && i == shipY){
                while(j < shipX+shipL){
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
    

    return 0;
}

//Function Definition
