/* 
 * File:   main.cpp
 * Author: David Macias
 * Purpose: Check out IDE
 * Created on January 4, 2016, 10:18 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The Problem to Solve
    cout <<"Solution to Gaddis 8thEd Chap5 Prob12" <<endl;
    cout <<"Display a temperature table" <<endl;
    
    //Declare and Initialize variables
    float slope = 5.0f/9;                              //Slope of the line for temperature conversion
    char intrcpt = -32;                                //Scaled 9/5 degrees C
    unsigned char c1 = 0, c2 = 100, f1 = 32, f2 = 212; //Data Points of freezing and boiling
    
    cout <<endl;
    cout <<"Fahrenheit   Celsius   Celsius" <<endl;
    cout <<fixed <<setprecision(2) <<showpoint;

    //Loop to generate degree Celsius
    for(int f=f1; f <= f2; f++){
        float ceq = slope*(f+intrcpt);
        float cintrp = c1 + static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
        cout <<setw(10) <<f <<setw(10) <<ceq <<setw(10) <<cintrp <<endl;;
    }
    
    //Input data

    //Calculate or map inputs to outputs

    //Output results

    //Exit stage right

    return 0;
}