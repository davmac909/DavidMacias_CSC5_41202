/* 
 * Author: David Macias
 * Created on January 25, 2016, 8:36 AM
 * Purpose: Power Function Example
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(int[], int);
void prntAry(int[], int, int);
void 1stSml(int[], int, int);
void
//Execution Begins Here
int main(int argc, char** argv) {
    string a;
    string b;
    
    
    cout <<"what is your name" <<endl;
    cin >>b;
    cout <<"and your last" <<endl;
    cin >>a;
    send(b,a);
    return 0;
}

//Function Definition
void send(string h, string i){
    cout <<"this is your name : " <<h <<endl;
    cout <<"and your last name is : " <<i <<endl;
}