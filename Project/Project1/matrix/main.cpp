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
    int matrix [2][2] = {
        {5,1},
        {1,0}
    };
    cout <<matrix[0][0] <<endl;
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cout << i << j << matrix[i][j]<<endl;
        }
    }

    return 0;
}

//Function Definition
