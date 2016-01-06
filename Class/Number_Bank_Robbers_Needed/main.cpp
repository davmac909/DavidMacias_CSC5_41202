/* 
 * Author: David Macias
 * Purpose: How many does it take?
 * Created on January 6, 2016, 11:40 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char wtBill = 1; //Weight in grams
const float cnvLbs = 1.0f/453.5f; //Conversion from grams to lbs

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and Initialize variables
    unsigned int amtStl; //Amount of steal
    unsigned short denom; //bill denomination
    unsigned char wrPers = 80; //Weight person can carry
    unsigned char nPerps; //Number of Perpetrators
    
    //Input data
    cout<<"How much money would you like to acquire?"<<endl;
    cin>>amtStl;
    cout<<""<<endl;
    cout<<"What is the bill denomination desired?"<<endl;
    cin>>denom;
    
    //Calculate number of perpetrators
    nPerps = cnvLbs*amtStl*wtBill/denom/wrPers+1;
    
    //Output results
    cout<<"Amount Desired: "<<amtStl<<endl;
    cout<<"Denomination Desired: $"<<denom<<endl;
    cout<<"Number of Inviduals required on the job = "<<static_cast<int>(nPerps)<<endl;
    
    //Exit stage right
    
    return 0;
}

