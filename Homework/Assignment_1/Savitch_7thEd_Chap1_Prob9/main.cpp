/* 
 * Author: David Macias
 * Purpose: Velocity of Sound
 * Created on January 11, 2016, 7:43 AM
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
    int tStrt, tStop;
    float temp, vel; 
    
    //Input data
    cout<<"Hello. This is a Program for Calculating the distance of a freefalling object."<<endl;
    cout<<"Press Enter after every response."<<endl;
    cout<<endl;
    cout<<"Enter the Starting Temperature. ";
    cin>>tStrt;
    cout<<endl;
    cout<<"Enter the Ending Temperature. ";
    cin>>tStop;
    cout<<endl;
    
    //Calculate or map inputs to outputs
    temp = tStrt++;
    
    
    //Output results  
    do {
        
        vel = 331.3f+0.61*temp;
        cout<<"At "<<temp<<" degrees Celsius the Velocity of Sound is "<<vel<<" m/s."<<endl; 
    }
    while(temp == tStop);
    
        
    //Exit stage right
    
    return 0;
}

