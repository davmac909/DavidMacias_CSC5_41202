/* 
 * File:   main.cpp
 * Author: David Macias
 * Purpose: Check out IDE
 * Created on January 4, 2016, 10:18 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    float amtNeed, inRate, mntDur, facVal, mntPay;
    char again;

    //Input data
    cout <<"This is a program to calculate the face value of a loan depending on" <<endl;
    cout <<"amount needed, interest rate, and duration of the loan." <<endl;
    cout <<"Press enter after every response" <<endl;
    cout <<endl;
    do {
	cout <<"What is the amount needed in dollars? " <<endl;
	cin >> amtNeed;
	cout <<endl;
	cout <<"What is the yearly interest rate? " <<endl;
	cin >> inRate;
	cout <<endl;
	cout <<"What is the duration of the loan in Months? " <<endl;
	cin >> mntDur;
        
        //Calculate or map inputs to outputs
	inRate /= 100.00f;
	facVal = amtNeed/(1-inRate*(mntDur/12));
        mntPay = facVal/mntDur;
        
        //Output results
        cout <<"The required face value of the loan is $"<<facVal <<" when $" <<amtNeed <<" is needed." <<endl;
	cout <<"Your Monthly installments will be $";
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout <<mntPay <<" per month for " <<mntDur <<" months." <<endl;
        cout <<endl;
        
        //Exit stage right
        cout <<"Calculate again? (y/n)" <<endl;
        cin >> again;
    }
    while ((again == 'y')||(again == 'Y'));
    
    cout <<"Good-Bye" <<endl;
    
    return 0;
}