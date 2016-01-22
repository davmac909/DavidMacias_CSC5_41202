/* 
 * Author: David Macias
 * Created on January 21, 2016, 10:20 AM
 * Purpose: Astrology Signs
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
    //Declare and Initialize variables
    unsigned short month;                  //Birthday month
    unsigned short day;                    //birth day
    char again;                            //Response to repeat program
    
    //Input data
    do {
        //Get the birthday month
        cout <<"What is your birthday month? (1-12)" <<endl;
        cin >>month;
        while(month > 12||month < 1){            //Month range (1-12)
            cout <<"That is not a valid input." <<endl;
            cout <<"Type the month as a number. i.e. Jan = 1, Feb = 2, Mar = 3, etc." <<endl;
            cin >>month;
        }
        
        //Get the birth day
        cout <<"And the day?" <<endl;
        cin >>day;
        while(day < 1||day > 31){                //Day range (1-31)
            cout <<"That is not a valid input for the day of the month." <<endl;
            cin >>day;
        }
        
        //Find out the zodiac sign
        if(month == 4) {
            if(day<=19) {
                cout <<"Aries!: Stop bugging people!" <<endl;
            }else{
                cout <<"Taurus!: You're too stubborn man!" <<endl;
            }
        }else if(month == 5){
            if(day<=20) {
                cout <<"Taurus!: You're too stubborn man!" <<endl;
            }else{
                cout <<"Gemini!: You switch personalities for different people" <<endl;
            }
        }else if(month == 6){
            if(day<=21) {
                cout <<"Gemini!: You switch personalities for different people" <<endl;
            }else{
                cout <<"Cancer!: Stop being a crybaby" <<endl;
            }
        }else if(month == 7){
            if(day<=22) {
                cout <<"Cancer!: Stop being a crybaby" <<endl;
            }else{
                cout <<"Leo!: Lighten that ego!" <<endl;
            }
        }else if(month == 8){
            if(day<=22) {
                cout <<"Leo!: Lighten that ego!" <<endl;
            }else{
                cout <<"Virgo!: You're selfish!" <<endl;
            }
        }else if(month == 9){
            if(day<=22) {
                cout <<"Virgo!: You're selfish!" <<endl;
            }else{
                cout <<"Libra!: Make up your mind already!" <<endl;
            }
        }else if(month == 10){
            if(day<=22) {
                cout <<"Libra!: Make up your mind already!" <<endl;
            }else{
                cout <<"Scorpio!: You got too many secrets" <<endl;
            }
        }else if(month == 11){
            if(day<=21) {
                cout <<"Scorpio!: You got too many secrets" <<endl;
            }else{
                cout <<"Sagittarius!: You have a rock as a heart" <<endl;
            }
        }else if(month == 12){
            if(day<=21) {
                cout <<"Sagittarius!: You have a rock as a heart" <<endl;
            }else{
                cout <<"Capricorn!: You're the best man!" <<endl;
            }
        }else if(month == 1){
            if(day<=19) {
                cout <<"Capricorn!: You're the best man!" <<endl;
            }else{
                cout <<"Aquarius!: Easy on being weird today" <<endl;
            }
        }else if(month == 2){
            while(day >=29) {
                cout << "There is no such day! Enter a day." <<endl;
                cin >>day;
            }
            if(day<=18) {
                cout <<"Aquarius!: Easy on being weird today" <<endl;
            }else{
                cout <<"Pisces!: Quit asking for attention" <<endl;
            }
        }else if(month == 3){
            if(day<=20) {
                cout <<"Pisces!: Quit asking for attention" <<endl;
            }else{
                cout <<"Aries!: Stop bugging people!" <<endl;
            }
        }
        
        //Does the user want to repeat?
        cout <<"Try again? (y/n)" <<endl;
        cin >>again;
        again = toupper(again);
        cout <<endl;
    }while (again == 'Y');
    
    //Calculate or map inputs to outputs
    
    //Output results

    //Exit stage right

    return 0;
}

