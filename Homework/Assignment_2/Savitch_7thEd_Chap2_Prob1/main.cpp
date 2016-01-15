/* 
  Author: David Macias
  Purpose: Metric Tons
  Created on January 11, 2016, 7:43 AM
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
float mTon = 35273.92f;         //metric ton in ounces

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and Initialize variables
    float pckg, nPckgs, pTon;           //packages, needed packages, and packages weight in metric tons.
    char rpt;                           //Character Buffer to repeat program
    
    //Input data
    cout << "Hello. This is a program that converts a package's weight in ounces to metric tons"<<endl;
    cout << "and calculates the amount of packages needed to yield one metric ton. " << endl;
    cout << "Press enter after every response." << endl;
    cout << endl;
    
    do {
        cout << "What is the Weight of the package of breakfast cereal in ounces?" <<endl;
        cin >> pckg;        //input for package weight in ounces

        //Calculate or map inputs to outputs
        nPckgs = mTon/pckg; //formula for yielding packages
        pTon = pckg/mTon;   //formula for converting ounces to metric tons

        //Output results  
        cout << "A " << pckg << " package weighs " << pTon << " metric tons." <<endl;
        cout << "The amount of " << pckg << "-ounce packages needed to yield a metric ton is ";
        cout << nPckgs <<endl;

        //Exit stage right
        cout <<endl;
        cout << "Do you Wish to repeat? (y/n)" <<endl;
        cin >> rpt; //input if user wishes to repeat program
        cout <<endl;
        
    }while ((rpt == 'Y')||(rpt == 'y'));

    cout << "Good-Bye."<<endl;

  return 0;
}