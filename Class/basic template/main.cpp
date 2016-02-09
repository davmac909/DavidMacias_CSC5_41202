/* 
 * Author: David Macias
 * Created on January 25, 2016, 8:36 AM
 * Purpose: Power Function Example
 */

//System Libraries
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    string str = "hello";
    istringstream ss(str);
    char i[5];
    ss >> i;
    if (ss.fail())
    {
        // Error
    }
    else
    {
        std::cout << "The integer value is: " << i;
    }

    return 0;
}

//Function Definition
