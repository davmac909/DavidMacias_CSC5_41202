/* 
 * File:   main.cpp
 * Author: David Macias
 * Purpose: Check out IDE
 * Created on January 4, 2016, 10:18 AM
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
    //Declare and Initialize variables
    float n;                       //input value to obtain its square root
    float r, guess;                //Intermediate values that approach square root
    float tol = 0.001f;            //Accuracy of the results / tolerance
    int num;                       //Calculation counter
    
    //Input data
    cout <<"This is a program to determine if a meeting is legal to hold " <<endl;
    cout <<"depending on room capacity and attendees." <<endl;
    cout <<"Press enter after every response" <<endl;
    cout <<endl;
    cout <<"Input the value to computer the square root of " <<endl;
    cin >> n; 
    cout <<endl;
    cout <<"Input value:      " <<n <<endl;
    cout <<"Square Root(" <<n <<"):  " <<sqrt(n) <<endl;
    cout <<endl;
    
    num = 1;
    guess = n/2; 
    
    do {
        //Approximate the square root
        r = n/guess;
        guess = (guess+r)/2;
        
        //Output results
        cout <<num;
        cout <<"      First step:     " <<r <<endl;
        cout <<"       Second step:    " <<guess <<endl;
        cout <<"-------------------------------" <<endl;
        num++;
        
        //Exit stage right
    }
    while (abs((r - guess)/guess)*100>tol);
    
    cout <<endl;
    cout <<"End result is: " <<guess <<endl;
    
    return 0;
}