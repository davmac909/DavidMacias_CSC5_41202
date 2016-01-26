/* 
 * Author: David Macias
 * Created on January 26, 2016, 8:44 AM
 * Purpose: Variations on a saving theme
 */

//System Libraries
#include <iostream> //I/O
#include <cmath>    //Power/Exponential/Log functions
#include <cstdlib>  //Rand and Srand functions
#include <ctime>    //
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const char PERCENT = 100;  //Convert (Decimal to Percentage)

//Function Prototypes
float save1(float, float, int);         //Power function
float save2(float, float, int);         //Exponential and Log functions
float save3(float, float, int);         //For-loops
float save4(float, float, int);         //For-loops banking with pennies
float save5(float, float, int);         //Recursion, functions calling itself
float save6(float, int, float = 0.05f); //Defaulted save function
float save7(float, float, int);         //For-loops and static variable

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and Initialize variables
    float pv = rand()%9001+1000; //Random value $[1000,10000]
    float intRate = rand()%11+5; //Random value %[5,15]
    char nComp = rand()%16;      //Random value [0,15]yrs
    
    //Output the random inputs
    cout <<fixed <<setprecision(2) <<showpoint;
    cout <<"The Present Value = $" <<pv <<endl;
    cout <<"The Interest Rate = " <<intRate <<"%" <<endl;
    cout <<"The number of years = " <<static_cast<int>(nComp) <<endl;

    //Output results
    cout <<"The Savings using Power Function               = $"
            <<save1(pv, intRate/PERCENT, nComp) <<endl;
    cout <<"The Savings using Exponential and Log Function = $"
            <<save2(pv, intRate/PERCENT, nComp) <<endl;
    cout <<"The Savings using For loops                    = $"
            <<save3(pv, intRate/PERCENT, nComp) <<endl;
    cout <<"The Savings using For loops (Banking Years)    = $"
            <<save4(pv, intRate/PERCENT, nComp) <<endl;\
    cout <<"The Savings using Recursion                    = $"
            <<save5(pv, intRate/PERCENT, nComp) <<endl;
    cout <<"The Savings using Exp. Defaulted Interest      = $"
            <<save6(pv, nComp, intRate/PERCENT) <<endl;
    cout <<"The Savings using Exp. Defaulted Interest   5% = $"
            <<save6(pv, nComp) <<endl;
    cout <<"The Savings using For loops w/ static counter  = $"
            <<save7(pv, intRate/PERCENT, nComp) <<endl;
    cout <<"The Savings using For loops w/ static counter  = $"
            <<save7(pv, intRate/PERCENT, nComp) <<endl;

    //Exit stage right

    return 0;
}

/******************************************************************************/
/*********************************save1****************************************/
//Inputs
// p->Present Value $'s
// i->Interest Rate %
// n->Number of compounding periods
//Output
// fv->Future Value $'s
//Note: Using the power function
float save1(float p, float i, int n){
    return p*pow((1+i), n);
}

/******************************************************************************/
/*********************************save2****************************************/
//Inputs
// p->Present Value $'s
// i->Interest Rate %
// n->Number of compounding periods
//Output
// fv->Future Value $'s
//Note: Using the Exponential and Log Functions
float save2(float p, float i, int n){
    
}

/******************************************************************************/
/*********************************save3****************************************/
//Inputs
// p->Present Value $'s
// i->Interest Rate %
// n->Number of compounding periods
//Output
// fv->Future Value $'s
//Note: Using For Loops
float save3(float p, float i, int n){
    for(int years = 1; years <= n; years++){
        p *= (1+i);
    }
    return p;
}

/******************************************************************************/
/*********************************save4****************************************/
//Inputs
// p->Present Value $'s
// i->Interest Rate %
// n->Number of compounding periods
//Output
// fv->Future Value $'s
//Note: Using For Loops Bank Version
float save4(float p, float i, int n){
    int ip = p*PERCENT; //Place the value in pennies
    for(int years = 1; years <= n; years++){
        ip *= (1+i);
    }
    p = static_cast<float>(ip)/PERCENT;
    return p;
}

/******************************************************************************/
/*********************************save5****************************************/
//Inputs
// p->Present Value $'s
// i->Interest Rate %
// n->Number of compounding periods
//Output
// fv->Future Value $'s
//Note: Using Recursion
float save5(float p, float i, int n){
    if(n <= 0){
        return p;    //Base Condition
    }
    return save5(p,i,n-1)*(1+i);
}

/******************************************************************************/
/*********************************save6****************************************/
//Inputs
// p->Present Value $'s
// i->Interest Rate %
// n->Number of compounding periods
//Output
// fv->Future Value $'s
//Note: Defaulting interest
float save6(float p, int n, float i){
    return p*pow((1+i), n);
}

/******************************************************************************/
/*********************************save7****************************************/
//Inputs
// p->Present Value $'s
// i->Interest Rate %
// n->Number of compounding periods
//Output
// fv->Future Value $'s
//Note: Using For Loops
float save7(float p, float i, int n){
    static int nCalls = 0;
    for(int years = 1; years <= n; years++){
        p *= (1+i);
    }
    nCalls++;
    cout <<"This Savings function contains a static counter = " <<nCalls <<endl;
    return p;
}