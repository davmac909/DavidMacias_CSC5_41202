/* 
 * Author: David Macias
 * Created on January 26, 2016, 7:55 AM
 * Purpose: Create Matrix
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
    int n;
    float sum;
    float x;
    int m;
    
    cout <<"Enter the number of terms 'n'." <<endl;
    cin >>n;
    cout <<"Enter the number 'x'." <<endl;
    cin >>x;
    
    for(int i=0; i <= n-1; i++, m++){
        sum += (n-i)/pow(x,i);
    }
    cout <<sum <<endl;
    cout <<"loop ran " <<m <<" times" <<endl;
    
    return 0;
}

//Function Definition
