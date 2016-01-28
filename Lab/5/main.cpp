/* 
 * Author: David Macias
 * Created on January 26, 2016, 7:55 AM
 * Purpose: Create Matrix
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
    int hrs;
    const float OT = 1.5f;
    const float DT = 2.0f;
    float payRate;
    
    cout <<"How many hours did you work?" <<endl;
    cin >>hrs;
    cout <<"What is your pay rate?" <<endl;
    cin >>payRate;
    
    cout <<"Gross = $"
        <<(hrs<=20?hrs*payRate
            :hrs>40?(20*payRate)+(20*(payRate*OT))+((hrs-40)*(payRate*DT))
                :(20*payRate)+((hrs-20)*(payRate*OT))) <<endl;
    
    
    return 0;
}

//Function Definition
