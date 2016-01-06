/* 
 * Author: David Macias
 * Purpose: Big C
 * Created on January 4, 2016, 11:40 AM
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
    int numpods, ppod, totpeas;
    
    //Input data
    cout<<"Hello."<<endl;
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    cin>>numpods;
    cout<<"Enter the number of peas in a pod:"<<endl;
    cin>>ppod;
    
    //Calculate or map inputs to outputs
    totpeas = numpods+ppod;
    
    //Output results
    cout<<"If you have ";
    cout<<numpods;
    cout<<" pea pods ";
    cout<<"and ";
    cout<<ppod;
    cout<<" peas in each pod, then ";
    cout<<"you have ";
    cout<<totpeas;
    cout<<" peas in all the pods."<<endl;
    cout<<"Good-bye."<<endl;
    
    //Exit stage right
    
    return 0;
}

