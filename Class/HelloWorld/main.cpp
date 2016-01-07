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
    string name;
    cout<<"type what you want recorded."<<endl;
    cin>>name;
    //Input data
    
    //Calculate or map inputs to outputs
    
    //Output results
    ofstream text("demofile.docx") ;
    cout<<"Now Writing..."<<endl;
    
    text<<name<<endl;
    
    text.close();
    cout<<"done."<<endl;
    
    //Exit stage right
    
    return 0;
}

