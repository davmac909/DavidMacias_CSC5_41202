/* 
 * File:   main.cpp
 * Author: David Macias
 * Purpose: Check out IDE
 * Created on January 4, 2016, 10:18 AM
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
    unsigned int rmCap, pplAtnd; //Max capacity of the room and people attending the meeting
    int legal;                   //Difference between capacity an attendees
    char again;                  //Question for user to repeat program

    //Input data
    cout <<"This is a program to determine if a meeting is legal to hold " <<endl;
    cout <<"depending on room capacity and attendees." <<endl;
    cout <<"Press enter after every response" <<endl;
    cout <<endl;
    do {
	cout <<"What is the room capacity? " <<endl;
	cin >> rmCap; //input for room capacity
	cout <<endl;
	cout <<"How much people are attending the meeting? " <<endl;
	cin >> pplAtnd; //input for attendees
	cout <<endl;
        
        //Calculate or map inputs to outputs
	legal = rmCap - pplAtnd; //formula to capacity and attendees difference
        
        //Output results
        if (legal < 0) {
            cout <<"There are too many people attending the meeting" <<endl;
            cout <<"making it illegal to hold according to fire regulations." <<endl;
            cout <<-legal <<" individual(s) should be excluded to continue with the meeting." <<endl;
        }else{
            cout <<"It is safe to hold the meeting according to fire regulations" <<endl;
            cout <<"with " <<legal <<" spots open for attendees." <<endl;
        }
        

        //Exit stage right
        cout <<endl;
        cout <<"Do again? (y/n)" <<endl;
        cin >> again;
    }
    while ((again == 'y')||(again == 'Y'));
    
    cout <<"Good-Bye" <<endl;
    
    return 0;
}