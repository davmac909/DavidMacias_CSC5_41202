/* 
 * Author: David Macias
 * Created on February 2, 2016, 8:36 AM
 * Purpose: Standard Length to Metric
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void getLgth(int &, int &);
void ft2Mtr(int, int, int &, float &);
void shwRslt(int, int, float, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int feet;
    int inches;
    int meters;
    float cnMeter;
    
    //Generate the value of feet and inches
    getLgth(feet, inches);
    
    //Convert to metric
    ft2Mtr(feet, inches, meters, cnMeter);
            
    //Output results
    shwRslt(feet, inches, meters, cnMeter);
    
    //Exit stage right
    return 0;
}

//Function Definition
void ft2Mtr(int ft, int in, int &mtrs, float &cntMtrs){
    cntMtrs = ((ft*12)+in)*2.54f;
    mtrs = cntMtrs/100;
    cntMtrs -= mtrs*100;
}

void getLgth(int &ft, int &in){
    srand(static_cast<int>(time(0)));
    ft = rand()%11;
    in = rand()%12;
}

void shwRslt(int ft, int in, float mtrs, float cntMtrs){
    cout <<ft <<" feet " <<in <<" inches " <<endl;
    cout <<"Converts to " <<mtrs <<" meters and " 
            <<cntMtrs <<" centimeters" <<endl;
}