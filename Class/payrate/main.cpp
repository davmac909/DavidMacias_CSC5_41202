/* 
 * File:   main.cpp
 * Author: David Macias
 * Purpose: Check out IDE
 * Created on January 4, 2016, 10:18 AM
 */
//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    int pay, ot = 40, payrate = 10, hrsWkd1 = 30, hrsWkd2 = 50;
    int otPay = payrate*1.5f;
    
    //Calculate or map inputs to outputs
    
    //Output results
    cout<<"if "<<hrsWkd1<<" hrs are worked then your pay is $"<<(hrsWkd1 >= 40? otPay*(hrsWkd1-ot)+hrsWkd1*payrate:hrsWkd1*payrate);
    cout<<" at $"<<(hrsWkd1 >= 40? otPay:payrate)<<"/hr"<<endl;
    
    cout<<"if "<<hrsWkd2<<" hrs are worked then your pay is $"<<(hrsWkd2 >= 40? otPay*(hrsWkd2-ot)+hrsWkd1*payrate:hrsWkd2*payrate);
    cout<<" at $"<<(hrsWkd2 >= 40? otPay:payrate)<<"/hr"<<endl;
    //Exit stage right
    
    return 0;
}