/* 
 * Author: David Macias
 * Created on January 24, 2016, 9:28 PM
 * Purpose: Computing clothing sizes
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float hatSize(float wght, float hght);
    //Function returns the hat size
    //when the weight and height 
    //are the arguments

float jktSize(float wght, float hght, int age);
    //Function returns the jacket size (chest in inches)
    //when the weight, height, and age
    //are inputted

float waist(float wght, int age);
    //Function returns the waist in inches
    //when the weight and age inputted


//Execution Begins Here
int main(int argc, char** argv) {
    //Introduce program
    cout <<"Hello. This program calculates clothing sizes" <<endl;
    cout <<"when the weight, height, and age are inputted." <<endl <<endl;
    
    //Declare and Initialize variables
    
    do {
        //Input the height, weight, and age

        //Output results

        //Exit stage right
        cout <<"Enter anything to repeat or '0' to stop" <<endl;
        cin >>rpt;
    }while(rpt != '0');

    return 0;
}

//Function Definitions
