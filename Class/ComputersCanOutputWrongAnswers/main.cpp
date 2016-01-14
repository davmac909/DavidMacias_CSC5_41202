/* 
 * File:   main.cpp
 * Author: David Macias
 * Purpose: Check out IDE
 * Created on January 4, 2016, 10:18 AM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    float qunty = 0.1f;                       //A Value to add repeatedly
    float sum = 0;                            //The result of a repetitive addition
    int count = 10000000;                     //Number of times to loop
    float ans;                                //The computed answer
    
    //Input data
    for(int i = 1; i <=count; i++){
        sum += qunty;
    }

    //Calculate inputs
    ans = count*qunty;

    //Output results
    cout <<"The product answer = " <<ans <<endl;
    cout <<"The sum answer     = " <<sum <<endl;
    cout <<"The percent error  = " <<(ans-sum)/ans*100 <<"%" <<endl;
        
    //Exit stage right
 
    return 0;
}