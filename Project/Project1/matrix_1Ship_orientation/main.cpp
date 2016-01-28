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
    unsigned int rows = 15;
    unsigned int clmns = 15;
    unsigned int shipX;
    unsigned int shipY;
    short shipL = 4;
    unsigned int ortn;
    
    char matrix [rows][clmns];
    ortn = rand()%2+1;
    shipX = rand()%clmns+1;
    shipY = rand()%rows+1;
    
    cout <<"X,Y = " <<shipX <<", " <<shipY <<endl;
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
