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
        //Input data for vehicle 1
        cout <<"How much gasoline in liters was consumed by the first vehicle?" <<endl;
        cin >>fuel;
        cout <<"How many miles were driven on "  <<fuel  <<" liters for the first vehicle?" <<endl;
        cin >>miles;

        //Calculate mpg for car 1
        car1 = mpg(fuel, miles);
        
        //Input data for vehicle 2
        cout <<"How much gasoline in liters was consumed by the second vehicle?" <<endl;
        cin >>fuel;
        cout <<"How many miles were driven on "  <<fuel  <<" liters for the second vehicle?" <<endl;
        cin >>miles;
        
        //Calculate mpg 
        car2 = mpg(fuel, miles);

        //Output results
        cout <<car1 <<" miles per gallon were delivered by vehicle 1." <<endl <<endl;
        cout <<car2 <<" miles per gallon were delivered by vehicle 2." <<endl <<endl;
        if(car1 > car2) {
            cout <<"The first vehicle is the one with the better fuel effeciency." <<endl;
        }else{
            cout <<"The second vehicle is the one with the better fuel effeciency." <<endl;
        }

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