/* 
 * Author: David Macias
 * Created on January 19, 2016, 8:32 AM
 * Purpose: Creating a Menu
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    cout <<"Solution to Savitch 7thEd Chap3 Prob12: ";
    cout <<"Approximating PI" <<endl;

    //Declare and initialize variables
    int terms;
    char sign = -1;
    
    
    //input value of x
    cout <<"Enter  of e^x computation." <<endl;
    cin >>x;
    
    //Calculate e^x
    for(int i = 2, j = 3; terms<=i; i++, j+=2){
        
    }
    
    //output results
    cout <<"The exact value of e^" <<x <<" = " <<exp(x) <<endl;
    cout <<"The number of terms it took to approx. e^" <<x <<" = " <<nTerm <<endl;
    cout <<"The approx. value of e^" <<x <<" = " <<etox <<endl;
    return 0;
}