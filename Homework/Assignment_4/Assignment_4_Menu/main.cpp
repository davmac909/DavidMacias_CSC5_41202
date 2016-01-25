/* 
 * Author: David Macias
 * Created on January 24, 2016, 11:13 AM
 * Purpose: Menu
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float mpg(float fuel_par, float miles_par);
//Function returns the miles per gallon the car delivered
//for the number of miles driven per gallon

float inRate(float yearAgo, float yearNow);
    //Function returns the rate of inflation
    //for the price of a hotdog a year ago and 
    //the price for an item now

float fPrice(float yearNow, float rate);
    //Function returns the rate of inflation
    //for the price of a hotdog a year ago and 
    //the price for an item now

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
    //Declare and Initialize variables
    unsigned short nSoltn;      //Problem Solution to display
    bool reDspl = true;         //Exit Program when false

    //Menu to display solution
    do {
        //Input Problem to display, i.e. Menu
        cout <<endl;
        cout <<"Assignment 3 Problem set" <<endl;
        cout <<"Type 1 to display Gaddis 8thEd Chap5 Prob7" <<endl;
        cout <<"Type 2 to display Gaddis 8thEd Chap5 Prob12" <<endl;
        cout <<"Type 3 to display Savitch 7thEd Chap4 Prob1" <<endl;
        cout <<"Type 4 to display Savitch 7thEd Chap4 Prob2" <<endl;
        cout <<"Type 5 to display Savitch 7thEd Chap4 Prob4" <<endl;
        cout <<"Type 6 to display Savitch 7thEd Chap4 Prob5" <<endl;
        cout <<"Type 7 to display Savitch 7thEd Chap4 Prob9" <<endl;
        cout <<"Type 8 to display Savitch 7thEd Chap4 Prob10" <<endl;
        cout <<"Type 9 to display Savitch 7thEd Chap4 Prob13" <<endl;
        cout <<"Type 10 to display Savitch 7thEd Chap4 Prob" <<endl;
        cout <<"Type anything else to exit" <<endl;
        cin >>nSoltn;
        cout <<endl;
        
        //Solutions to all the problems
        switch (nSoltn) {
            case 1: {
                //The Problem to Solve
                cout <<"Solution to Gaddis 8thEd Chap5 Prob7" <<endl;
                cout <<"Display a salary table" <<endl;

                //Declare and Initialize variables
                unsigned int salary = 1;      //Salary starting at a penny
                double totPay = salary;                 //Total Pay by summing the salary

                //Loop to generate salary table and total paid
                cout <<"Day          Salary          Total" <<endl;
                cout <<fixed <<setprecision(2) <<showpoint;
                cout <<setw(4) <<1 <<setw(15) <<salary/100.0f <<setw(15) <<totPay/100.0f <<endl;

                for (int day = 2; day <= 31; day++){
                    //salary *= 2;
                    salary <<=1; //Bit shift right by 1
                    totPay += salary;
                    cout <<setw(4) <<day <<setw(15) <<salary/100.0 <<setw(15) <<totPay/100.0 <<endl;
                }
                break;
            }
            
            case 2: {
                //The Problem to Solve
                cout <<"Solution to Gaddis 8thEd Chap5 Prob12" <<endl;
                cout <<"Display a temperature table" <<endl;

                //Declare and Initialize variables
                float slope = 5.0f/9;                              //Slope of the line for temperature conversion
                char intrcpt = -32;                                //Scaled 9/5 degrees C
                unsigned char c1 = 0, c2 = 100, f1 = 32, f2 = 212; //Data Points of freezing and boiling

                cout <<endl;
                cout <<"Fahrenheit   Celsius   Celsius" <<endl;
                cout <<fixed <<setprecision(2) <<showpoint;

                //Loop to generate degree Celsius
                for(int f=f1; f <= f2; f++){
                    float ceq = slope*(f+intrcpt);
                    float cintrp = c1 + static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
                    cout <<setw(10) <<f <<setw(10) <<ceq <<setw(10) <<cintrp <<endl;;
                }
                break;
            }
            case 3: {
                //Introduce program
                cout <<"Hello. This program computes the miles per gallon outputted by a vehicle" <<endl;
                cout <<"when liters consumed and miles driven by the vehicle are inputted." <<endl <<endl;

                //Declare and Initialize variables
                float fuel;
                float miles;
                char rpt;

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
            
                break;
            }
            
            case 4: {
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
               
                break;
            }
            
            case 5: {
               //Introduce program
                cout <<"Hello. This program computes the rate of inflation for any item" <<endl;
                cout <<"when the price a year ago and the price now are inputted." <<endl <<endl;

                //Declare and Initialize variables
                float costOld;      //Price of an item a year ago
                float costNow;      //Price of an item now
                char rpt;           //Input to repeat program

                do {
                    //Input the prices for the item
                    cout <<"What was the price of any item a year ago?" <<endl;
                    cin >>costOld;
                    cout <<"What is the price for the item now?" <<endl;
                    cin >>costNow;

                    //Output results
                    cout <<inRate(costOld, costNow) <<"% is the Rate of inflation for this item." <<endl <<endl;

                    //Exit stage right
                    cout <<"Enter anything to repeat or '0' to stop" <<endl;
                    cin >>rpt;
                }while(rpt != '0');
                
                break;
            }
            
            case 6: {
                //Introduce program
                cout <<"Hello. This program computes the rate of inflation for any item" <<endl;
                cout <<"when the price a year ago and the price now are inputted." <<endl <<endl;

                //Declare and Initialize variables
                float cost1Yr;
                float cost2Yr;
                float infltn;
                float costOld;      //Price of an item a year ago
                float costNow;      //Price of an item now
                char rpt;           //Input to repeat program

                do {
                    //Input the prices for the item
                    cout <<"What was the price of any item a year ago?" <<endl;
                    cin >>costOld;
                    cout <<"What is the price for the item now?" <<endl;
                    cin >>costNow;

                    //Calculate inflation rate
                    infltn = inRate(costOld, costNow);

                    //Calculate Future price of item
                    cost1Yr = fPrice(costNow, infltn);
                    cost2Yr = fPrice(cost1Yr, infltn);

                    //Output results
                    cout <<endl;
                    cout <<infltn <<"% is the Rate of inflation for this item." <<endl;
                    cout <<"Next year the estimated cost of this item is:             $" 
                           <<fixed <<setprecision(2) <<showpoint <<cost1Yr <<endl; 
                    cout <<"Two years from now the estimated cost of this item is:    $" <<cost2Yr <<endl <<endl;

                    //Exit stage right
                    cout <<"Enter anything to repeat or '0' to stop" <<endl;
                    cin >>rpt;
                }while(rpt != '0');
               
                break;
            }
            
            case 7: {
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

                break;
            }
            
            case 8: {
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
                    cout <<"Your waist in inches:               " <<waist(weight, age) <<" in." <<endl <<endl;

                    //add 10 years to age
                    age += 10;

                    //output the future sizes
                    cout <<"Your jacket size (chest in inches) in ten years will be: " <<jktSize(weight, height, age) <<" in." <<endl;
                    cout <<"Your waist in inches after ten years will be:            " <<waist(weight, age) <<" in." <<endl;

                    //Exit stage right
                    cout <<"Enter anything to repeat or '0' to stop" <<endl;
                    cin >>rpt;
                }while(rpt != '0');
                
                break;
            }
            
            case 9: {
                
                break;
            }
            
            case 10: {
                
                break;
            }
            
            default:{
                cout <<"Exiting the Program" <<endl;
                reDspl = false;
            }
            
        }
    
    }while(reDspl);

    //Exit stage right

    return 0;
}

//Function Definitions
float mpg(float fuel_par, float miles_par){
    float lsToGal = 0.264179f;
    float gallns = fuel_par*lsToGal;
    return (miles_par/gallns);
}

float inRate(float yearAgo, float yearNow){
    return ((yearNow-yearAgo)/yearAgo);
}
float fPrice(float yearNow, float rate){
    return(yearNow*rate+yearNow);
}
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