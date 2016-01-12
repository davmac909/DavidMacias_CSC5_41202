/* 
  Author: David Macias
  Purpose: Metric Tons
  Created on January 11, 2016, 7:43 AM
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
    int score;
    
//Input data
    cout << "Whats the score?" <<endl;
    cin >> score;
    
//Calculate or map inputs to outputs
    cout << (score >= 90? "A":
            (score >= 80? "B":
            (score >= 70? "C":
            (score >= 60? "D":"F")))) <<endl;

//Output results  


//Exit stage right

  return 0;
}