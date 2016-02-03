/* 
 * Author: David Macias
 * Created on January 26, 2016, 7:55 AM
 * Purpose: Create Matrix
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
    unsigned short rows;
    unsigned short clmns;
    
    cout <<"how many rows?" <<endl;
    cin >>rows;
    cout <<"how many columns?" <<endl;
    cin >>clmns;
    
    char matrix [rows][clmns];
    
    for(int i = 0; i <= rows; i++) {
        for(int j = 0; j <= clmns; j++) {
            matrix[i][j] = 'X';
        }
    }
    
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < clmns; ++j) {
            cout <<matrix[i][j];
            
        }
        cout <<endl;
    }

    return 0;
}

//Function Definition
