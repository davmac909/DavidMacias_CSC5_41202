/* 

 * Author: David Macias
 * Created on January 21, 2016, 8:17 AM
 * Purpose: Arabic Numerals to Roman conversion
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
    unsigned short year;
    short nThou;
    short nHun;
    short nTens;
    
    //Input data
    cout <<"Choose the year you would like to convert to Roman Numeral. (1000-3000)" <<endl;
    cin >>year;
    
    while((year <1000)&&(year >3000)){
        cout <<"That year is not valid. Choose one between 1000 to 3000." <<endl;
        cin >>year;
    }
    
    //Calculate or map inputs to outputs

    //Output results

    //Exit stage right

    return 0;
}

