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
    float n;                     //input value to obtain its square root
    float r, guess, done;               //Intermediate values that approach square root

    //Input data
    cout <<"This is a program to determine if a meeting is legal to hold " <<endl;
    cout <<"depending on room capacity and attendees." <<endl;
    cout <<"Press enter after every response" <<endl;
    cout <<endl;
    cout <<"Input the value to computer the square root of " <<endl;
    cin >> n; 
    cout <<endl;
    
    guess = n/2; 
    r = n/guess;
    guess = (guess+r)/2;
    
    cout <<"Input value:      " <<n <<endl;
    cout <<"Square Root(" <<n <<"):  " <<sqrt(n) <<endl;
    cout <<endl;
    
    do {
        //Approximate the square root first pass
        r = n/guess;
        guess = (guess+r)/2;
        
        //Output results
        
        cout <<"First pass r:     " <<r <<endl;
        cout <<"First pass guess: " <<guess <<endl;
        
        done = r-guess;
        //Exit stage right
    }
    while (done < 0);
    
    cout <<"Good-Bye" <<endl;
    
    return 0;
}