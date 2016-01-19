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
    
    //Initialize the sequence
    fim2 = fim1 = 1;            //Start the Sequence
    counter = 2;                //Initialize the counter

    //Input number of terms
    cout <<"Enter the number of terms in the sequence" <<endl;
    cin >>nTerms;

    //Calculate the output required
    if(nTerms == 1) { 
        cout <<"Term " <<nTerms <<" in the sequence = ";
                cout <<fim2 <<endl;
    }else if(nTerms == 2) {
        cout <<"Term " <<nTerms <<" in the sequence = ";
                cout <<fim2 <<endl;
    }else{
        do{
            fi = fim1+fim2;
            counter++;
            fim2 = fim1;
            fim1 = fi;
        }while(counter<nTerms);
        cout <<"Term " <<nTerms <<" in the sequence = ";
                cout <<fi <<endl;
    }
    return 0;
}