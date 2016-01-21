/* 
 * Author: David Macias
 * Created on January 21, 2016, 10:20 AM
 * Purpose: Astrology Signs
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
    //The problem to solve
    cout <<endl <<"Fun look at the Saving and rule of 72" <<endl;
    cout <<endl <<"http://california.municipalbonds.com/bonds/recent/" <<endl;
    
    //Declare and Initialize variables
    float balance = 100.00f;        //Initial Balance 's
    float intRate = 0.05f;          //Interest Rate / year
    float rule72 = 0.72f/intRate;       //Rule of 72, Future value = 2 * present
    
    //Output Table Heading
    cout <<"The interest rate = " <<intRate*100 <<"%" <<endl;
    cout <<"At this interest Principle should double every ";
    cout <<rule72 <<" years" <<endl <<endl;
    cout <<"Year Year  Balance  Interest" <<endl;
    cout <<fixed <<setprecision(2) <<showpoint;
    
    //Calculate the savings
    int y = 0, year = 2016;
    do {
        cout <<setw(4) <<y <<" " <<year <<setw(8) <<balance <<setw(8) <<balance*intRate <<endl;
        balance *= (1+intRate);
        y++;
        year++;
    }while(y <= 50);
   
    //Input data

    //Calculate or map inputs to outputs
    
    //Output results

    //Exit stage right

    return 0;
}

