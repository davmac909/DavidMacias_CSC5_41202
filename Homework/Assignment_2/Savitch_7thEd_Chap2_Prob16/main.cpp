/* 
 * Author: David Macias
 * Created on January 14, 2016, 11:10 Pm
 * Purpose: Rewriting Program
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float PI = 3.1415f; //

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    float radius;         //Radius of sphere
    float vSphr;          //Volume of sphere

    //Input for the radius of the sphere
    cout <<"Enter radius of a sphere." << endl; 
    cin >> radius;

    //Calculate volume of the sphere
    vSphr = (4.0 / 3.0)*PI*pow(radius,3);
    
    //Output results
    cout <<"The volume of the sphere is: " << vSphr << endl;

    //Exit stage right
    return 0;
}