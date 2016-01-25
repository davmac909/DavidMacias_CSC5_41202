/* 
 * Author: David Macias
 * Created on January 24, 2016, 6:39 PM
 * Purpose: Determine best Miles per Gallon between two cars
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
float lsToGal = 0.264179f; 

//Function Prototypes
float mpg(float fuel_par, float miles_par);
//Function returns the miles per gallon the car delivered
//for the number of miles driven per gallon

//Execution Begins Here
int main(int argc, char** argv) {
    //Introduce program
    cout <<"Hello. This program computes the miles per gallon outputted by a vehicle" <<endl;
    cout <<"when liters consumed and miles driven by the vehicle are inputted." <<endl <<endl;
    
    //Declare and Initialize variables
    float fuel;
    float miles;
    char rpt;
    float car1;
    float car2;

    do {
        //Input data
        cout <<"How much gasoline in liters was consumed by the vehicle?" <<endl;
        cin >>fuel;
        cout <<"How many miles were driven on "  <<fuel  <<" liters?" <<endl;
        cin >>miles;

        //Calculate or map inputs to outputs

        //Output results
        cout <<mpg(fuel,miles) <<" miles per gallon were delivered by this vehicle." <<endl <<endl;

        //Exit stage right
        cout <<"Enter anything to repeat or '0' to stop" <<endl;
        cin >>rpt;
    }while(rpt != '0');

    return 0;
}

//Function Definition
float mpg(float fuel_par, float miles_par){
    float gallns = fuel_par*lsToGal;
    return (miles_par/gallns);
}