/* 
 * Author: David Macias
 * Created on January 21, 2016, 8:17 AM
 * Purpose: Arabic Numerals to Roman conversion
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
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and Initialize variables
    unsigned short year = rand()%2001+1000; //Random Year to be converted to roman numeral [1000-3000]]
    unsigned char nThou;                   //Number of Thousands in year
    unsigned char nHun;                    //Number of hundreds in year
    unsigned char nTen;                    //Number of tens in year
    unsigned char nOne;                    //Number of ones in year
    
    cout <<"The Year to convert: " <<year <<endl;
    
    //Input data
    nThou = (year-year%1000)/1000;         //Number of Thousands in year
    year = year-nThou*1000;                //Subtract off 1000
    nHun = (year-year%100)/100;            //Number of Hundreds in year
    year = year-nHun*100;                  //Subtract off 100
    nTen = (year-year%10)/10;              //Number of Tens in year
    nOne = year-nTen*10;                   //Subtract off 10 for ones
    
    //Calculate or map inputs to outputs
    cout <<"The Number Of Thousands: " <<static_cast<int>(nThou) <<endl;
    cout <<"The Number Of Hundreds:  " <<static_cast<int>(nHun) <<endl;
    cout <<"The Number Of Tens:      " <<static_cast<int>(nTen) <<endl;
    cout <<"The Number Of ones:      " <<static_cast<int>(nOne) <<endl;
    
    //Output results
    cout <<"The Roman Numeral equivalent is: ";
    
    //Output the Thousands
    switch(nThou){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    
    //Output the Hundreds
    switch(nHun){
        case 9: cout<<"CM"; break;
        case 8: cout<<"DCCC"; break;
        case 7: cout<<"DCC"; break;
        case 6: cout<<"DC"; break;
        case 5: cout<<"D"; break;
        case 4: cout<<"CD"; break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
    }
    
    //Output the Tens
    switch(nTen){
        case 9: cout<<"XC"; break;
        case 8: cout<<"LXXX"; break;
        case 7: cout<<"LXX"; break;
        case 6: cout<<"LX"; break;
        case 5: cout<<"L"; break;
        case 4: cout<<"XL"; break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
    }
    
    //Output the Ones
    switch(nOne){
        case 9: cout<<"IX"; break;
        case 8: cout<<"VIII"; break;
        case 7: cout<<"VII"; break;
        case 6: cout<<"VI"; break;
        case 5: cout<<"V"; break;
        case 4: cout<<"IV"; break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
    }
    
    

    //Exit stage right

    return 0;
}

