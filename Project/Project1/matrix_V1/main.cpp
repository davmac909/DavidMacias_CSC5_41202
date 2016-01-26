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
    int matrix [3][3] = {0,0,0,0,0,0,0,0,0};
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout <<matrix[i][j];   
        }
        cout <<endl;
    }
    return 0;
}

//Function Definition
