/* 
 * Author: David Macias
 * Created on January 25, 2016, 8:36 AM
 * Purpose: Power Function Example
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int pow(int, int);


//Execution Begins Here
int main(int argc, char** argv) {
    //Variables to be used in timing
    int beg, end, begd, endd, loop = 10000000;   //beginning and ending for both functions
    
    //Declare and Initialize variables
    char rpt;
    int x;         //base of the problem
    int y;         //exponent of the problem
    int z;         //result
    

    do {
        //Input data
        cout <<"input a and b for a^b" <<endl;
        cin >>x >>y;
        
        //map inputs to outputs
        beg = static_cast<unsigned int>(time(0));
        for(int i = 1;i <= loop;i++){z = pow(x,y);}
        end = static_cast<unsigned int>(time(0));
        
        //output results
        cout <<x <<" to the power of " <<y <<" is equal to " <<z <<endl;
        cout <<end-beg <<"sec" <<endl <<endl;
    }while(rpt != '0');

    return 0;
}

//Function Definition
int pow(int a, int b){
    if(b <= 0){
        return(1);
    }
    int abd2 = pow(a,b/2);
    if(b == 1) {
        return(a);
    }
    if(b%2){
        return(abd2*abd2*a);    //If odd
    }else{
        return(abd2*abd2);  //else even
    }
}