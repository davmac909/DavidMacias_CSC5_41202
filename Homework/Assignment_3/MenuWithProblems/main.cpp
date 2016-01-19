/* 
 * Author: David Macias
 * Created on January 19, 2016, 8:32 AM
 * Purpose: Creating a Menu
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
    //Declare and Initialize variables
    unsigned short nSoltn;      //Problem Solution to display
    bool reDspl = true;         //Exit Program when false

    //Menu to display solution
    do {
        //Input Problem to display, i.e. Menu
        cout <<endl;
        cout <<"Assignment 3 Problem set" <<endl;
        cout <<"Type 1 to display Savitch 7thEd Chap3 Prob10" <<endl;
        cout <<"Type 2 to display Problem 2" <<endl;
        cout <<"Type 3 to display Problem 3" <<endl;
        cout <<"Type 4 to display Problem 4" <<endl;
        cout <<"Type anything else to exit" <<endl;
        cin >>nSoltn;
        cout <<endl;
        
        //Solutions to all the problems
        switch (nSoltn) {
            case 1: {
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
                break;
            }
            
            case 2: {
                cout <<"Solution to Savitch 7thEd Chap3 Prob11: ";
                cout <<"Approximated e^x" <<endl;

                //Declare and initialize variables
                const unsigned char nTerms = 13;
                float etox = 1, x;                //e^x

                //input value of x
                cout <<"Enter  of e^x computation." <<endl;
                cin >>x;

                //Calculate e^x
                for (int n=1; n<=nTerms; n++) {
                    //Declare Variables
                    unsigned int factN = 1;        //N and N!

                    //Calculate the output required
                    for (int i=1; i<=n; i++) {
                        factN *= i;
                    }

                    //Calculate e^x with the above factorial
                    etox += pow(x,n)/factN;
                }

                //output results
                cout <<"The exact value of e^" <<x <<" = " <<exp(x) <<endl;
                cout <<"The approx. value of e^" <<x <<" = " <<etox <<endl;
                break;
            }
            case 3: {
                cout <<"Solution to problem 3" <<endl;
                break;
            }
            case 4: {
                cout <<"Solution to problem 4" <<endl;
                break;
            }
            default:{
                cout <<"Exiting the Program" <<endl;
                reDspl = false;
            }
        }
    
    }while(reDspl);

    //Exit stage right

    return 0;
}