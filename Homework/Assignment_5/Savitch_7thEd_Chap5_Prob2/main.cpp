/* 
 * Author: David Macias
 * Created on February 4, 2016, 8:36 AM
 * Purpose: Savitch 7thEd Chap5 Prob2
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void getTims(int &, int &, int &, int &);
void tAfter(int, int, int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int tmNowHr = 0;
    int tmNowMn = 0;
    int wtTmHr = 0;
    int wtTmMn = 0;
    int tmAfter = 0;
    
    //Generate the value of change to be processed [1-99]
    getTims(tmNowHr, tmNowMn, wtTmHr, wtTmMn);
    
    //Output the time now and the wait time
    cout <<"The time now is " <<tmNowHr <<":" <<tmNowMn <<endl;
    cout <<"And the time to wait is " <<wtTmHr <<":" <<wtTmMn <<endl;
    
    //Process the amount of coins in value for quarters, dimes, pennies
    tAfter(tmNowHr, tmNowMn, wtTmHr, wtTmMn);
    
    //Exit stage right
    return 0;
}

//Function Definition
void getTims(int &stTmHrs, int &stTmMin, int &wtTmHrs, int &wtTmMin){
    srand(static_cast<int>(time(0)));
    stTmHrs = rand()%24+1;
    stTmMin = rand()%60;
    wtTmHrs = rand()%24+1;
    wtTmMin = rand()%60;
}

void tAfter(int hrsNow, int minNow, int hrsWait, int minWait){
    int hrAfter;
    int mnAfter;
    int totMin = minNow + minWait;
    int addHrs = totMin/60;
    hrAfter = hrsNow + hrsWait + addHrs;
    if(hrAfter > 24){
        hrAfter = hrAfter%24;
    }
    mnAfter = totMin%60;
    cout <<"The time after will be " <<hrAfter <<":" <<mnAfter <<endl;
}