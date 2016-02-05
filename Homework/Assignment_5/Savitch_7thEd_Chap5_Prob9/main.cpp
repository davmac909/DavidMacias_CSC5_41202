/* 
 * Author: David Macias
 * Created on February 3, 2016, 8:36 AM
 * Purpose: Pounds and ounces to kilograms and grams
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void getWght(int &, int &);
void lbs2Mtr(int, int, int &, float &);
void shwRslt(int, int, float, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int pounds;
    int ounces;
    int kGrms;
    float grms;
    
    //Generate the value of pounds and ounces
    getWght(pounds, ounces);
    
    //Convert to metric
    lbs2Mtr(pounds, ounces, kGrms, grms);
            
    //Output results
    shwRslt(pounds, ounces, kGrms, grms);
    
    //Exit stage right
    return 0;
}

//Function Definition
void lbs2Mtr(int lbs, int oncs, int &kGrm, float &grm){
    grm = ((lbs*16)+oncs)*28.3495f;
    kGrm = grm/1000;
    grm -= kGrm*1000;
}

void getWght(int &lbs, int &oncs){
    srand(static_cast<int>(time(0)));
    lbs = rand()%30;
    oncs = rand()%16;
}

void shwRslt(int lbs, int oncs, float kGrm, float grm){
    cout <<lbs <<" pounds " <<oncs <<" ounces " <<endl;
    cout <<"Converts to " <<kGrm <<" kilos and " 
            <<grm <<" grams" <<endl;
}