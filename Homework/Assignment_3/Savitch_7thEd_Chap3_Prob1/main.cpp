/* 
 * File:   main.cpp
 * Author: David Macias
 * Purpose: Check out IDE
 * Created on January 4, 2016, 10:18 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    // set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and Initialize variables
    char rndComp;
    char userIn;
    char again;
    string result;
    int userCtr = 0;
    int compCtr = 0;
    int tie = 0;
    
    //Introduce program
    cout <<"Lets play Paper, Rock, Scissors!!" <<endl;
    
    //Loop to play again
    do {
        
        //Randomize choice
        do {
            rndComp = rand()%4+80; // 80 to 83 random generation
        }while(rndComp == 'Q');

        //Input data
        cout <<"What is your choice?" <<endl;
        cin >>userIn;
        userIn = toupper(userIn);

        while(!(userIn == 'P'||userIn == 'R'||userIn == 'S')){
            cout <<"That is not a valid choice.What is your choice? (P,R,S)" <<endl;
            cin >>userIn;
            userIn = toupper(userIn);
        }
        //Calculate or map inputs to outputs
        if(userIn == rndComp){
            result = "Its a tie!";
            tie++;
        }else if(userIn == 'P'&& rndComp == 'R'){
            result = "User wins!";
            userCtr++;
        }else if(userIn == 'R'&& rndComp == 'S'){
            result = "User wins!";
            userCtr++;
        }else if(userIn == 'S'&& rndComp == 'P'){
            result = "User wins!";
            userCtr++;
        }else{
            result = "Computer Wins!";
            compCtr++;
        }

        //Output results
        cout <<"User played:     " <<userIn <<endl;
        cout <<"Computer played: " <<rndComp <<endl;
        cout <<result <<endl <<endl;
        cout <<"User: " <<userCtr <<" " <<"Comp: " <<compCtr <<" " <<"Tie: " <<tie <<endl;

        //Exit stage right
        cout <<"Play again? (y/n)" <<endl;
        cin >>again;
        again = toupper(again);
    
    }while(again == 'Y');
    
    return 0;
}