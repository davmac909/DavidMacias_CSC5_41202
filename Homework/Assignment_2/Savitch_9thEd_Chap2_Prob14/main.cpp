/* 
 * Author: David Macias
 * Created on January 14, 2016, 9:43 PM
 * Purpose: Letter to Instructor
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    string insNam;       //Instructors Name
    string name;         //Users Name
    string food;         //Food
    string num;          //A number between 100 and 120
    string adj;          //An Adjective
    string color;        //A color
    string animl;        //An animal
    
    //Input data
    cout << "Complete the question below to fill in blanks in a story that will be displayed after." <<endl;
    cout <<"Enter all the items required in one line separated by a space." <<endl;
    cout <<endl;
    cout <<"- The First or Last name of your instructor" <<endl;
    cout <<"- Your Name" <<endl;
    cout <<"- A Food" <<endl;
    cout <<"- A number between 100 and 120" <<endl;
    cout <<"- An Adjective" <<endl;
    cout <<"- A color" <<endl;
    cin >>insNam;
  
    //Map inputs to outputs
    
    //Output results
    cout <<endl;
    cout <<"Dear Instructor " <<insNam <<"," <<endl;
    cout <<"I am sorry that i am unable to turn in my homework at this time." <<endl;
    cout <<"First, i ate a rotten " <<food <<" which made me turn " <<color <<" and " <<endl;
    cout <<"extremely ill. I came down with a fever of " <<num <<"." <<endl;
    cout <<"Next, my " <<adj <<" pet " <<animl <<" must have smelled the remains " <<endl;
    cout <<"of the " <<food <<" on my homework, because he ate it. I am currently " <<endl;
    cout <<"rewriting my homework and hope you will accept it late." <<endl;
    cout <<endl;
    cout <<"Sincerely," <<endl;
    cout <<name <<endl;
    
    //Exit stage right
    return 0;
}