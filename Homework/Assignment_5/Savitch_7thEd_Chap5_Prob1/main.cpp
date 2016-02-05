/* 
 * Author: David Macias
 * Created on January 25, 2016, 8:36 AM
 * Purpose: 24 hour time to 12 hour 
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void getInpt(int &, int &);
int timConv(int &, char &);
void shwRslt(int, int, char);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int hrs;       //Hours
    int mins;      //Minutes
    char dayInfo;  //AM or PM depending if hrs > 12
    
    do{
        //Get the time in 24 hours format
        getInpt(hrs, mins);
        
        //Convert the time to 12 hour format
        timConv(hrs, dayInfo);
        
        //Output results
        shwRslt(hrs, mins, dayInfo);
        
        //Ask if user wants to try again
        cout <<"again?" <<endl;
        cin >>dayInfo;
        dayInfo = toupper(dayInfo);
    }while(dayInfo == 'Y');

    //Exit stage right
    return 0;
}

//Function Definition
void getInpt(int &hr, int &min){
	cout <<"Type the time in 24 Hour notation (i.e 14:25)." <<endl;
	cin >>hr;
        cin.ignore(2,':');
        cin >>min;
}
 
int timConv(int &hr, char &lttr){
	if(hr > 12){
		hr -= 12;
		lttr = 'P';
	}else{
		lttr = 'A';
	}
}
 
void shwRslt(int hr, int min, char lttr){
	cout <<"The converted time is " <<hr <<":" <<min <<lttr <<endl;
}