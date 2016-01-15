/* 
 * Author: David Macias
 * Purpose: Loan
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
    float r, l, p, totInt, totInts, temp;  
    unsigned int n;

    //Input data
	cout <<"What is the interest rate? " <<endl;
	cin >> r;
	cout <<endl;
	cout <<"What is the number of payments? " <<endl;
	cin >> n;
	cout <<endl;
	cout <<"What is the loan amount? " <<endl;
	cin >> l;
        
        //Calculate or map inputs to outputs
        r /= 100.00f;
        r /= 12; 
        temp = pow(1+r,n);
	p = (r*temp*l)/(temp-1);
        totInts = n*p-l;
        
        //Output results
        cout <<endl;
        cout <<"Interest Rate: " <<r*100*12 <<"%" <<endl;
        cout <<"Number of Payments: " <<n <<endl;
        cout <<"Loan amount: $" <<l <<endl;
        cout <<endl;
        cout <<"Your Payments are: $";
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);
                cout <<p <<endl;
                cout <<"Total Interest: $" <<totInts <<endl;
        //Exit stage right

    
    return 0;
}

