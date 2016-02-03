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
    unsigned int rows;
    unsigned int clmns;
    unsigned int dispX;
    unsigned int dispY;
    unsigned int ship1X;
    unsigned int ship1Y;
    unsigned int ship1L = 4;
    unsigned int ship2X;
    unsigned int ship2Y;
    unsigned int ship2L = 3;
    unsigned int ship3X;
    unsigned int ship3Y;
    unsigned int ship3L = 2;
    
    
    cout <<"how many rows?" <<endl;
    cin >>rows;
    cout <<"how many columns?" <<endl;
    cin >>clmns;
    

    ship1X = 5;
    ship1Y = 5;
    ship2X = rand()%clmns+1;
    ship2Y = rand()%rows+1;
    ship3X = rand()%clmns+1;
    ship3Y = rand()%rows+1;
    
    cout <<"1x = " <<ship1X <<" 1y = " <<ship1Y <<endl;
    cout <<"2x = " <<ship2X <<" 2y = " <<ship2Y <<endl;
    cout <<"3x = " <<ship3X <<" 3y = " <<ship3Y <<endl;
    
    char matrix [rows][clmns];
//------------------------------------------------------------------------------    
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= clmns; j++){
            if((i == ship1Y) && (j == ship1X)){
                for(int g = ship1X; g <= ship1X+ship1L; g++){
                    matrix[i][g] = 'O';
                }
            }else{
                matrix[i][j] = 'X';
            }
        }
    }
//------------------------------------------------------------------------------
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= clmns; j++) {
            cout <<matrix[i][j];
            
        }
        cout <<endl;
    }
//------------------------------------------------------------------------------
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
        
        for(int i = 1; i <= rows; i++) {
            for(int j = 1; j <= clmns; j++) {
                cout <<matrix[i][j];

            }
            cout <<endl;
        }
    }while(look);

    return 0;
}

//Function Definition
