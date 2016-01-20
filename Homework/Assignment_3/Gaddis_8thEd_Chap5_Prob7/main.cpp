/* 
 * Author: David Macias
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Table of salary doubling starting at a penny.
 *          Double is required because number of significant digits
 *          Anything larger than $99,999.99 requires a double
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
    cout <<"Solution to Gaddis 8thEd Chap5 Prob7" <<endl;
    cout <<"Display a salary table" <<endl;
    
    //Declare and Initialize variables
    unsigned int salary = 1;      //Salary starting at a penny
    double totPay = salary;                 //Total Pay by summing the salary
    
    //Loop to generate salary table and total paid
    cout <<"Day          Salary          Total" <<endl;
    cout <<fixed <<setprecision(2) <<showpoint;
    cout <<setw(4) <<1 <<setw(15) <<salary/100.0f <<setw(15) <<totPay/100.0f <<endl;
    
    for (int day = 2; day <= 31; day++){
        //salary *= 2;
        salary <<=1; //Bit shift right by 1
        totPay += salary;
        cout <<setw(4) <<day <<setw(15) <<salary/100.0 <<setw(15) <<totPay/100.0 <<endl;
    }
    
    //Input data

    //Calculate or map inputs to outputs

    //Output results

    //Exit stage right

    return 0;
}