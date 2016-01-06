/* 
 * Author: David Macias
 * Purpose: Calculating Change
 * Created on January 6, 2016, 11:19 AM
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
    int qrtrs, nckls, dms, totCnts, totQtrs, totNkls, totDms, cnvPnDl = 100;
    
    //Input data
    cout<<"Hello. This is a Program for Adding change. (Coins)"<<endl;
    cout<<"Press Enter after every response."<<endl;
    cout<<""<<endl;
    cout<<"How many Quarters do you have? ";
    cin>>qrtrs;
    cout<<""<<endl;
    cout<<"How many Dimes do you have? ";
    cin>>dms;
    cout<<""<<endl;
    cout<<"How many Nickels do you have? ";
    cin>>nckls;
    cout<<""<<endl;
    
    //Calculate or map inputs to outputs
    totQtrs = qrtrs*25;
    totDms = dms*10;
    totNkls = nckls*5;
    totCnts = totQtrs+totDms+totNkls;
    
    //Output results
    cout<<qrtrs<<" Quarters"<<endl;
    cout<<dms<<" Dimes"<<endl;
    cout<<nckls<<" Nickels"<<endl;
    cout<<"Add up to "<<totCnts<<" Cents";
    cout<<" or "<<1.0f*totCnts/cnvPnDl<<" Dollars."<<endl;
    
    //Exit stage right
    
    return 0;
}

