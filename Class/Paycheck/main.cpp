/* 
  Author: David Macias
  Purpose: Calculate Paycheck, Straight Time
  Created on January 5, 2016, 10:18 AM
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
    unsigned char hrsWrkd = 40; // hours worked (hrs)
    float payRate = 1e1f; //Pay Rate in dlls/Hour
    
    //Input data
    
    //Calculate or map inputs to outputs
    float payChck = payRate*hrsWrkd; //Pay check (dlls)
    
    //Output results
    cout<<"Pay Rate     = $ "<<payRate<<"'s/hr"<<endl;
    cout<<"Hours Worked =   "<<static_cast<int>(hrsWrkd)<<" (hrs)"<<endl;
    cout<<"Pay Check    = $"<<payChck<<endl;
    
    //Exit stage right
    
    return 0;
}

