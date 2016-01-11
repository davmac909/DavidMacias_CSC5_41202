/* 
 * Author: David Macias
 * Purpose: Distance of Falling Object
 * Created on January 7, 2016, 11:40 AM
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
    
    //Declare and Initialize variables
    int tim, calcTim, aclTim;
    float dist, grv = 32.174f;
    
    //Input data
    cout<<"Hello. This is a Program for Calculating the distance of a freefalling object."<<endl;
    cout<<"Press Enter after every response."<<endl;
    cout<<""<<endl;
    cout<<"Enter the time in Seconds that it took the object took to fall. ";
    cin>>tim;
    cout<<""<<endl;
    
    //Calculate or map inputs to outputs
    dist = 0.5f*grv*(tim*tim);
    
    //Output results 
    cout<<""<<endl;
    cout<<"The distance at which the object fell is "<<fixed<<setprecision(3)<<showpoint<<dist<<" feet."<<endl;
    
    //Exit stage right
    
    return 0;
}

