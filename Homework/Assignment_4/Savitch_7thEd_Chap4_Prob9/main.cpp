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
    float height, weight;   //height in inches and weight in lbs.
    unsigned int age;       //age in years
    char rpt;               //Input to repeat program

    do {
        //Input the height, weight, and age
        cout <<"What is your height in inches?" <<endl;
        cin >>height;
        cout <<"What is your weight in pounds?" <<endl;
        cin >>weight;
        cout <<"What is your age in years?" <<endl;
        cin >>age;
        
        //Output results
        cout <<endl;
        cout <<fixed <<setprecision(2) <<showpoint;
        cout <<"Your Hat size is:                    " <<hatSize(weight, height) <<endl;
        cout <<"Your jacket size (chest in inches): " <<jktSize(weight, height, age) <<" in." <<endl;
        cout <<"Your waist in inches:               " <<waist(weight, age) <<" in." <<endl;

        //Exit stage right
        cout <<"Enter anything to repeat or '0' to stop" <<endl;
        cin >>rpt;
    }while(rpt != '0');

    return 0;
}

//Function Definitions
float hatSize(float wght, float hght){
    return ((wght/hght)*2.9f);
}
float jktSize(float wght, float hght, int age){
    int adj = 0;
    if(age > 30){
        adj = (age-30)/10;
    }
    return((hght*wght/288)+(adj*0.125f));
}
float waist(float wght, int age){
    int adj = 0;
    if(age > 28){
        adj = (age - 28)/2;
    }
    return((wght/5.7f)+(adj*0.1f));
}