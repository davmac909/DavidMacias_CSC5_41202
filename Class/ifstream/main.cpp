/* 
 * File:   main.cpp
 * Author: David Macias
 * Purpose: Check out IDE
 * Created on January 4, 2016, 10:18 AM
 */
//System Libraries
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants


//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
    string fLine;
  ifstream in ("Battleship Scores.dat");
  if (in.is_open())
  {
    while ( getline (in,fLine) )
    {
      cout << fLine << '\n';
    }
    in.close();
  }

  else cout << "Unable to open file"; 

    
    return 0;
}

//Function Definition
