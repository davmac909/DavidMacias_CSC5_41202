/* 
 * Author: David Macias
 * Created on January 26, 2016, 7:55 AM
 * Purpose: Create Matrix
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random time seed
    srand(static_cast<int>(time(0)));
    
    //Declare and initialize variables
    unsigned short rows;
    unsigned short clmns;
    unsigned short dispX;
    unsigned short dispY;
    unsigned short ship1X;
    unsigned short ship1Y;
    unsigned short ship1L = 4;
    unsigned short ship2X;
    unsigned short ship2Y;
    unsigned short ship2L = 3;
    unsigned short ship3X;
    unsigned short ship3Y;
    unsigned short ship3L = 2;
    
    
    cout <<"how many rows?" <<endl;
    cin >>rows;
    cout <<"how many columns?" <<endl;
    cin >>clmns;
    

    ship1X = rand()%clmns;
    ship1Y = rand()%rows;
    ship2X = rand()%clmns;
    ship2Y = rand()%rows;
    ship3X = rand()%clmns;
    ship3Y = rand()%rows;
    
    cout <<"1x = " <<ship1X <<" 1y = " <<ship1Y <<endl;
    char matrix [rows][clmns];
    
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= clmns; j++) {
            if(i == ship1Y && j == ship1X){
                for(int g = 1; g <= ship1L; g++) {
                    matrix[i][g] = 'O';
                }
                matrix[i][j] = 'X';
            }else if(i == ship2Y && j == ship2X){
                for(int g = 1; g <= ship1L; g++) {
                    matrix[i][g] = 'O';
                }
                matrix[i][j] = 'X';
            }else if(i == ship3Y && j == ship3X){
                for(int g = 1; g <= ship1L; g++) {
                    matrix[i][g] = 'O';
                }
                matrix[i][j] = 'X';
            }else{matrix[i][j] = 'X';
            }
        }
    }
    
    
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= clmns; j++) {
            cout <<matrix[i][j];
            
        }
        cout <<endl;
    }
    cout <<"Whats the x coordinate youd like to display?" <<endl;
    cin >>dispX;
    cout <<"Whats the y coordinate youd like to display?" <<endl;
    cin >>dispY;
    
    cout <<matrix[dispY][dispX];

    return 0;
}

//Function Definition
