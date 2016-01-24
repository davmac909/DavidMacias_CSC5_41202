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
    cout <<"Solution to Savitch 7thEd Chap3 Prob10: ";
    cout <<"The Fibonacci Sequence" <<endl;

    //Declare Variables
    unsigned int fi, fim1,fim2; //Designations in the sequence
    unsigned short nTerms;      //Number of turns in the sequence
    unsigned short counter;     //Current position in the sequence
    const char DREPRO = 5;      //Days to Reproduce
    unsigned int nDays;         //Number of days
    float crdWght;              //Initial Crud Weight
    char again;                 //Response to run the program again

    do {
        //Initialize the sequence
        fim2 = fim1 = 1;            //Start the Sequence
        counter = 2;                //Initialize the counter

        //Input number of terms    
        cout <<"Enter the initial Crud Weight" <<endl;
        cin >>crdWght;
        cout <<"How many days will the crud be allowed to grow?" <<endl;
        cin >>nDays;

        //Calculate the number of terms
        nTerms = nDays/DREPRO+1;

        //Calculate the output required
        if(nTerms == 1) { 
            cout <<"The crud weight after " <<nDays <<" is " <<fim2*crdWght <<" (lbs)." <<endl;
        }else if(nTerms == 2) {
            cout <<"The crud weight after " <<nDays <<" is " <<fim1*crdWght <<" (lbs)." <<endl;
        }else{
            do{
                fi = fim1+fim2;
                counter++;
                fim2 = fim1;
                fim1 = fi;
            }while(counter<nTerms);
            cout <<"The crud weight after " <<nDays <<" is " <<fi*crdWght <<" (lbs)." <<endl;
        }
        cout <<"Calculate again (y/n)?" <<endl;
        cin >>again;
        
    }while(again == 'y'||again == 'Y');
    return 0;
}