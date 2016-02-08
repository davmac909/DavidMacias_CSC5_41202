/* 
 * Author: David Macias
 * Created on January 25, 2016, 8:36 AM
 * Purpose: Power Function Example
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int a = 34;
    int *ptra;
    
    ptra = &a;
    
    cout <<&a <<endl;
    cout <<*ptra <<endl;
    cout <<ptra <<endl;
    cout <<a <<endl;
    return 0;
}

//Function Definition
