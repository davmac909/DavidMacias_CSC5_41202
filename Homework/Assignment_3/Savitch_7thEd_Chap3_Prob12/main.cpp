/* 
 * Author: David Macias
 * Created on January 19, 2016, 8:32 AM
 * Purpose: Creating a Menu
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
    cout <<"Solution to Savitch 7thEd Chap3 Prob12: " <<endl;
    cout <<"Monty Hall Game Show Statistics" <<endl <<endl;

    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables 
    unsigned short cnsD1;               //Consolation Door 1
    unsigned short cnsD2;               //Consolation Door 2
    unsigned short swtch;               //Variable to determine the decision on a door change
    unsigned short winCar = 0;          //Counter for number of times car was won without switching doors
    unsigned short wnCrSw = 0;          //Counter for number of times car was won by switching doors
    unsigned short showCns;             //Consolation Door shown before being asked to change doors if desired
    unsigned short cntSwts = 0;         //Counter for the door changes made
    unsigned short runs = 1000;         //Number of simulations program loops through before outputting percentages
    unsigned short choice;              //The door that is chosen
    unsigned short carDoor;             //The door that the car is behind
    unsigned short newPick;             //New door chosen after one consolation prize is shown and the decision to switch is made
 
    //Loop the game show simulations (runs) number of times
    for(int count = 1; count <= runs; count++){
        //randomize the doors where car is and the door that is chosen
        carDoor = rand()%3+1;
        choice = rand()%3+1;
        
        //randomize the variable that determines if the door chosen is switched / 1 = switch doors, 2 = keeping the original choice
        swtch = rand()%2+1;
        
        //Randomize consolation door but so that it is not equivalent to the car door
        do{
            cnsD1 = rand()%3+1;
        }while(cnsD1 == carDoor);
        
        //Randomize the second consolation door but so that is not equivalent to the car door or the first consolation door
        do{
            cnsD2 = rand()%3+1;
        }while(cnsD2 == cnsD1||cnsD2 == carDoor);
        
        //Output the simulation number and doors for verification purposes
        cout <<"Run " <<count <<endl;
        cout <<"----------------" <<endl;
        cout <<"Car door = " <<carDoor <<endl;
        cout <<"Consolation prize 1 door = " <<cnsD1 <<endl;
        cout <<"Consolation prize 2 door = " <<cnsD2 <<endl;
        cout <<"Original choice door = " <<choice <<endl <<endl;
        
        //Show one consolation prize and switch doors or keep the original choice
        cout <<"Let me show you a prize you could've won!" <<endl;
        do {
            showCns = rand()%3+1;
        }while(showCns == carDoor||showCns == choice);
        cout <<"Door " <<showCns <<" is a Consolation door." <<endl <<endl;
        cout <<"Would you like to switch doors?" <<endl;
        if(swtch == 1){
            cout <<"Yes! Im gonna switch!" <<endl;
            cntSwts++;
            do {
                newPick = rand()%3+1;
            }while(newPick == showCns||newPick == choice);
            cout <<"New choice door = " <<newPick <<endl <<endl;
        }else{
            cout <<"No. I'm gonna Keep the Original!" <<endl;
        }
        
        //Count the number of times the car was won by keeping the original door and switching it
        if(swtch == 1) {
            if(newPick == carDoor){
                cout <<"Congratulations! You won the Car even after you swithced your choice!" <<endl <<endl;
                wnCrSw++;
            }else{
            cout <<"You didnt win the car." <<endl <<endl;
        }
        }else if(choice == carDoor){
            cout <<"Congratulations! You won the Car!" <<endl <<endl;
            winCar++;
        }else{
            cout <<"You didnt win the car." <<endl <<endl;
        }
    }
    
    //Output the results
    cout <<"Out of " <<runs <<" runs:" <<endl;
    cout <<cntSwts <<" Choice door swtiches were made.                          "<<cntSwts*1.0f/runs*100 <<"%" <<endl;
    cout <<winCar <<" Car(s) were won by keeping the original door chosen.     " <<winCar*1.0f/runs*100 <<"%" <<endl;
    cout <<wnCrSw <<" Car(s) were won by switching the original door chosen.   " <<wnCrSw*1.0f/runs*100 <<"%" <<endl;
    
    //Exit
    return 0;
}