/* 
 * Author: David Macias
 * Purpose: Libraries Test
 * Created on January 7, 2016, 11:48 AM
 */
//System Libraries
#include <iostream>//I/O Library
#include <cstdlib> //Random function location
#include <cmath>   //Math functions
#include <ctime>   //Time to set the random seed
#include <iomanip> //Format Library
#include <fstream> //Reading/writing to a file
using namespace std;

//User Libraries

//Global Constant
const float  GRAV=32.174f;//Sea Level Earth Acceleration Constant ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    ofstream outfile;//Declare a file stream object called out
    float  tim,dist;//Time in sec and Distance in feet
    
    //time with a random number and opening a file
    tim=rand()%11+10;//[10,20]secs
    const int SIZE=21;
    char fileNam[SIZE]="DropDistance.dat";
    outfile.open(fileNam);
    
    //Calculate 
    dist=0.5f*GRAV*tim*tim;
    
    //Output the results
    cout<<"Drop Time = "<<tim<<"(sec)"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;//Format the Distance to 3 decimals
    cout<<"Free Fall Distance x2="<<setw(9)<<dist<<"(ft)"<<endl;
  
    //Calculate 
    dist=0.5f*GRAV*pow(tim,2);
    
    //Output the results
    cout<<"Free Fall Distance pow="<<setw(10)<<dist<<"(ft)"<<endl;
    
    //Calculate 
    dist=0.5f*GRAV*exp(2*log(tim));
    
    //Output the results
    cout<<"Free Fall Distance exp(log)="<<setw(10)<<dist<<"(ft)"<<endl;
    
    //Output the results to a file
    outfile<<fixed<<setprecision(3)<<showpoint;//Format the Distance to 3 decimals
    outfile<<"Free Fall Distance exp(log)="<<setw(10)<<dist<<"(ft)"<<endl;
    
    //Exit stage right make sure to close files
    outfile.close();
    return 0;
}