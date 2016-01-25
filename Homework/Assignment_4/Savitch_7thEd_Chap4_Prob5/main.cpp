/* 
 * Author: David Macias
 * Created on January 24, 2016, 6:39 PM
 * Purpose: Estimate the future price of an item
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float inRate(float yearAgo, float yearNow);
    //Function returns the rate of inflation
    //for the price of a hotdog a year ago and 
    //the price for a hot dog now

float fPrice(float yearNow, float rate);
    //Function returns the rate of inflation
    //for the price of a hotdog a year ago and 
    //the price for a hot dog now

//Execution Begins Here
int main(int argc, char** argv) {
    //Introduce program
    cout <<"Hello. This program computes the rate of inflation for any item" <<endl;
    cout <<"when the price a year ago and the price now are inputted." <<endl <<endl;
    
    //Declare and Initialize variables
    float cost1Yr;
    float cost2Yr;
    float infltn;
    float costOld;      //Price of an item a year ago
    float costNow;      //Price of an item now
    char rpt;           //Input to repeat program

    do {
        //Input the prices for the item
        cout <<"What was the price of any item a year ago?" <<endl;
        cin >>costOld;
        cout <<"What is the price for the item now?" <<endl;
        cin >>costNow;
        
        //Calculate inflation rate
        infltn = inRate(costOld, costNow);
        
        //Calculate Future price of item
        cost1Yr = fPrice(costNow, infltn);
        cost2Yr = fPrice(cost1Yr, infltn);
        
        //Output results
        cout <<endl;
        cout <<infltn <<"% is the Rate of inflation for this item." <<endl;
        cout <<"Next year the estimated cost of this item is:             $" 
               <<fixed <<setprecision(2) <<showpoint <<cost1Yr <<endl; 
        cout <<"Two years from now the estimated cost of this item is:    $" <<cost2Yr <<endl <<endl;

        //Exit stage right
        cout <<"Enter anything to repeat or '0' to stop" <<endl;
        cin >>rpt;
    }while(rpt != '0');

    return 0;
}

//Function Definitions
float inRate(float yearAgo, float yearNow){
    return ((yearNow-yearAgo)/yearAgo);
}
float fPrice(float yearNow, float rate){
    return(yearNow*rate+yearNow);
}