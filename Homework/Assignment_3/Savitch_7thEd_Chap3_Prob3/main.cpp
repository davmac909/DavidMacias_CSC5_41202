/* 
 * Author: David Macias
 * Created on January 21, 2016, 10:20 AM
 * Purpose: Astrology Signs
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    unsigned short month;
    unsigned short day;
    char again;
    
    //Input data
    do {
        cout <<"What is your birthday month? (1-12)" <<endl;
        cin >>month;
        while(month > 12||month < 1){
            cout <<"That is not a valid input." <<endl;
            cout <<"Type the month as a number. i.e. Jan = 1, Feb = 2, Mar = 3, etc." <<endl;
            cin >>month;
        }

        cout <<"And the day?" <<endl;
        cin >>day;
        while(day < 1||day > 31){
            cout <<"That is not a valid input for the day of the month." <<endl;
            cin >>day;
        }
        
        cout <<"Try again? (y/n)" <<endl;
        cin >>again;
        again = toupper(again);
        cout <<endl;
    }while (again == 'Y');
    
    //Calculate or map inputs to outputs
    
    //Output results

    //Exit stage right

    return 0;
}

