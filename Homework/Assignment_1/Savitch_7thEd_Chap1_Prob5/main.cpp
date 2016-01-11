/* 
 * Author: David Macias
 * Purpose: Calculating sum and Product of two integers.
 * Created on January 6, 2016, 11:30 AM
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
    int fstInt, secInt, sum, prod;
    
    //Input data
    cout<<"Hello. This is a Program for Calculating the Sum and Product of Two Integers."<<endl;
    cout<<"Press Enter after every response."<<endl;
    cout<<""<<endl;
    cout<<"Please Enter the first Integer: ";
    cin>>fstInt;
    cout<<""<<endl;
    cout<<"Now Enter the Second Integer: ";
    cin>>secInt;
    
    //Calculate or map inputs to outputs
    sum = fstInt+secInt;
    prod = fstInt*secInt;
    
    //Output results
    cout<<""<<endl;
    cout<<"The Sum of "<<fstInt<<" and "<<secInt<<" is equal to "<<sum<<"."<<endl;
    cout<<"The Product of "<<fstInt<<" and "<<secInt<<" is equal to "<<prod<<"."<<endl;
    
    //Exit stage right
    
    return 0;
}

