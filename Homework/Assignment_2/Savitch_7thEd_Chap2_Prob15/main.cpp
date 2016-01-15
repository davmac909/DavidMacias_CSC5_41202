/* 
 * Author: David Macias
 * Created on January 11, 2016, 7:43 AM
 * Purpose: Velocity of Sound
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
    int tStrt, tStop, temp;          //Starting Temperature of Air (Celsius), Ending Temperature, Temperature buffer
    float vel;                       //Velocity (m/s)
    
    //Input data
    cout<<"Hello. This a program that Calculates the Velocity of Sound"<<endl;
    cout<<"through a range of Air Temperatures."<<endl;
    cout<<endl;
    cout<<"Enter Starting Temperature in Celsius: "<<endl;
    cin>>tStrt;                      //Input for Starting Temperature
    cout<<"Enter Ending Temperature in Celsius: "<<endl;
    cin>>tStop;                      //Input for Ending Temperature
    cout<<endl;
    
    //Calculate or map inputs to outputs
    temp = tStrt;                    //Setting Starting Temperature to Temperature buffer
    
    //Output results  
    while(temp != tStop + 1) {       //Boolean for when to stop looping the formula and output
        vel = 331.3f + 0.61f * temp; //Formula for calculating velocity
        cout << "At " << temp << " degrees Celsius the Velocity of Sound is ";
        cout << vel << " m/s." << endl;
        temp++;                      //Incrementing Temperature buffer by 1 to exit the loop
    }
    
    //Exit stage right
    
    return 0;
}