/* 
 * Author: David Macias
 * Created on January 24, 2016, 11:13 AM
 * Purpose: Menu
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    unsigned short nSoltn;      //Problem Solution to display
    bool reDspl = true;         //Exit Program when false

    //Menu to display solution
    do {
        //Input Problem to display, i.e. Menu
        cout <<endl;
        cout <<"Assignment 3 Problem set" <<endl;
        cout <<"Type 1 to display Gaddis 8thEd Chap5 Prob7" <<endl;
        cout <<"Type 2 to display Savitch 7thEd Chap3 Prob11" <<endl;
        cout <<"Type 3 to display Savitch 7thEd Chap3 Prob1" <<endl;
        cout <<"Type 4 to display Savitch 7thEd Chap3 Prob3" <<endl;
        cout <<"Type 5 to display Savitch 7thEd Chap3 Prob5" <<endl;
        cout <<"Type 6 to display Savitch 7thEd Chap3 Prob7" <<endl;
        cout <<"Type 7 to display Savitch 7thEd Chap3 Prob" <<endl;
        cout <<"Type 8 to display Savitch 7thEd Chap3 Prob" <<endl;
        cout <<"Type 9 to display Savitch 7thEd Chap3 Prob" <<endl;
        cout <<"Type 10 to display Savitch 7thEd Chap3 Prob" <<endl;
        cout <<"Type anything else to exit" <<endl;
        cin >>nSoltn;
        cout <<endl;
        
        //Solutions to all the problems
        switch (nSoltn) {
            case 1: {
                
                break;
            }
            
            case 2: {
   
                break;
            }
            case 3: {
            
                break;
            }
            
            case 4: {
               
                break;
            }
            
            case 5: {
                
                break;
            }
            
            case 6: {
               
                break;
            }
            
            case 7: {
                
                break;
            }
            
            case 8: {
                break;
            }
            
            case 9: {
                break;
            }
            
            case 10: {
                break;
            }
            
            default:{
                cout <<"Exiting the Program" <<endl;
                reDspl = false;
            }
            
        }
    
    }while(reDspl);

    //Exit stage right

    return 0;
}