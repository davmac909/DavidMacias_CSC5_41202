/* 
 * Author: David Macias
 * Purpose: Big C
 * Created on January 4, 2016, 11:40 AM
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
    int tim, dist, calcTim, aclTim;
    
    //Input data
    
    //Calculate or map inputs to outputs
    
    //Output results
    cout<<"Hello. This is a Program for Calculating the distance of a freefalling object."<<endl;
    cout<<"Press Enter after every response."<<endl;
    cout<<""<<endl;
    cout<<"Enter the time in Seconds that it took the object to fall. ";
    cin>>tim;
    cout<<""<<endl;
   
    dist = 32*tim^2/2;
    
    cout<<""<<endl;
    cout<<"The distance at which the object fell is "<<dist<<" feet."<<endl;
    
    //Exit stage right
    
    return 0;
}

