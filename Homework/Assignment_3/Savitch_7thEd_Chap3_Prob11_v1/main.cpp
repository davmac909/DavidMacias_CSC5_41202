/* 
 * Author: David Macias
 * Created on January 19, 2016, 8:32 AM
 * Purpose: Creating a Menu
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    cout <<"Solution to Savitch 7thEd Chap3 Prob11: ";
    cout <<"Approximated e^x" <<endl;

    //Declare Variables
    unsigned int n, factN = 1;  //N and N!

    //Input number of terms
    cout <<"Enter the number you would like to compute the factorial n" <<endl;
    cout <<"The limit to this calculation is <= 13" <<endl;
    cin >>n;

    //Calculate the output required
    for (int i=1; i<=n; i++) {
        factN *= i;
    }
    cout <<n <<"!=" <<factN <<endl;
    
    return 0;
}