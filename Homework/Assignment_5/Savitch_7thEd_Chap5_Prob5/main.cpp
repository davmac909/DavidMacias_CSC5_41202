/* 
 * Author: David Macias
 * Created on February 2, 2016, 8:36 AM
 * Purpose: Change value to coins
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void getChg(int &);
int comCoin(int, int &, int&);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const int QRTR = 25;
    const int DIME = 10;
    const int PENNY = 1;
    int chgLeft;
    int num;
    
    //Generate the value of change to be processed [1-99]
    getChg(chgLeft);
    
    //Process the amount of coins in value for quarters, dimes, pennies
    comCoin(QRTR, num, chgLeft);
    comCoin(DIME, num, chgLeft);
    comCoin(PENNY, num, chgLeft);
    
    //Exit stage right
    return 0;
}

//Function Definition
int comCoin(int denom, int &number, int &left){
    number = left/denom;
    left = left%denom;
    cout <<number <<(denom == 25?" Quarter(s) ":
        denom == 10?" Dime(s) ":" Penny(pennies) ");
}

void getChg(int &value){
    srand(static_cast<int>(time(0)));
    value = rand()%98+1;
    cout <<value <<" Cents can be given as "<<endl;
}