/* 
 * Author: David Macias
 * Purpose: JackPot
 * Created on January 11, 2016, 7:43 AM
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
    float jackpot, lumpSum = 0.62, aftrTax = 0.52, mar = 0.5, rcv;              //Velocity (m/s)
    char m;
    
    //Input data
    cout<<"Hello. This a program that Calculates how much of the Jackpot you'll recieve after taxes."<<endl;
    cout<<"Press Enter After Every Response."<<endl;
    cout<<endl;
    cout<<"How much is the Jackpot? "<<endl;
    cin>>jackpot; //jackpot amount
    cout<<"Are you Married? (y/n)"<<endl;
    cin>>m;
    cout<<endl;
    
    //Calculate or map inputs to outputs
    if (m != 'y') {
        rcv = jackpot*lumpSum*aftrTax;
    	cout<<"You will get $"<<rcv<<" total afer taxes and fees."<<endl;
    	
    	}
    	
    else {
    	rcv = jackpot*lumpSum*aftrTax*mar;
    	cout<<"You and your spouse will get $"<<rcv<<" each afer taxes and fees."<<endl;
    	}
    
    //Output results  
        
    //Exit stage right
    
    return 0;
}