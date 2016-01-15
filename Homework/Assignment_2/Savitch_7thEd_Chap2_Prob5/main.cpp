/* 
 * Author: David Macias
 * Created on January 14, 2016, 9:18 PM
 * Purpose: Calculating Face Value of Loans
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
    float amtNeed;              //Amount of dollars that are needed
    float inRate;               //Yearly Interest Rate
    float mntDur;               //During of the loan in Months
    float facVal;               //Total face value of the loan
    float mntPay;               //Monthly Installments
    char again;                 //Buffer to have program repeated by user

    //Input data
    cout <<"This is a program to calculate the face value of a loan depending on" <<endl;
    cout <<"amount needed, interest rate, and duration of the loan." <<endl;
    cout <<"Press enter after every response" <<endl;
    cout <<endl;
    
    do {
        //Input for the Amount that is needed in dollars
	cout <<"What is the amount needed in dollars? " <<endl;
	cin >> amtNeed;
	cout <<endl;
        
        //Input for the Interest rate
	cout <<"What is the yearly interest rate? " <<endl;
	cin >> inRate;
	cout <<endl;
        
        //Input for the duration in Months
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
    }while (again == 'y'||again == 'Y');

    cout <<"Good-Bye" <<endl;
    
    return 0;
}