/* 
 * Author: David Macias
 * Purpose: Calculating Change
 * Created on January 6, 2016, 30:19 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib> //Random function location
#include <ctime>   //Time to set the random seed
#include <cmath>   //Math functions
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
const int QRTR = 25; // value of a quarter
const int DIM = 10;  // value of a dime
const int NCKL = 5;  // value of a nickel

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    // set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and Initialize variables
    int rndQrts, rndNcks, rndDms, totCnts, totQtrs, totNkls, totDms, cnvPnDl = 100;
    
    //randomize coins
    rndQrts = rand()%11; // max of 10 quarters per run
    rndNcks = rand()%11; // max of 10 nickels per run
    rndDms = rand()%11; // max of 10 dimes per run
    
    //Input data
    cout<<"Hello. This is a Program for Adding change when it is randomly generated. (Max of 10 coins per denomination)"<<endl;
    cout<<"Generating coins...."<<endl;
    cout<<""<<endl;
    cout<<rndQrts<<" random quarters were generated."<<endl;
    cout<<rndDms<<" random dimes were generated."<<endl;
    cout<<rndNcks<<" random nickels were generated."<<endl;
    cout<<""<<endl;
    
    //Calculate or map inputs to outputs
    totCnts = (rndQrts*QRTR)+(rndNcks*NCKL)+(rndDms*DIM);
    
    //Output results
    cout<<rndQrts<<" Quarters, ";
    cout<<rndDms<<" Dimes, ";
    cout<<"and "<<rndNcks<<" Nickels ";
    cout<<"add up to "<<totCnts<<" Cents";
    cout<<" or $"<<fixed<<setprecision(2)<<showpoint<<1.0f*totCnts/cnvPnDl<<endl;
    
    //Exit stage right
    
    return 0;
}

