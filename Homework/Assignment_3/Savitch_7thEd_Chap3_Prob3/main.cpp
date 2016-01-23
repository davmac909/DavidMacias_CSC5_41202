/* 
 * Author: David Macias
 * Created on January 21, 2016, 10:20 AM
 * Purpose: Astrology Signs
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
    unsigned short month;                  //Birthday month
    unsigned short day;                    //birth day
    char again;                            //Response to repeat program
    bool cusp = false;                     //Boolean to determine if person was close to being born another sign
    
    //Input data
    do {
        //Get the birthday month
        cout <<"What is your birthday month? (1-12)" <<endl;
        cin >>month;
        while(month > 12||month < 1){            //Month range (1-12)
            cout <<"That is not a valid Month input." <<endl;
            cout <<"Type the month as a number. i.e. Jan = 1, Feb = 2, Mar = 3, etc." <<endl;
            cin >>month;
            
        }
        
        //Get the birth day
        cout <<"And the day?" <<endl;
        cin >>day;
        
        while(day < 1||day > 31){                //Day range (1-31)
            cout <<"That is not a valid day input for the day of the month." <<endl;
            cin >>day;
        }
        
        //Find out the zodiac sign
        if(month == 4) {
            if((day >= 17)&&(day <= 22)) {
                cusp = true;
            }
            
            if(day<=19) {
                cout <<"Aries!: Stop bugging people!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Taurus!" <<endl;
                }
            }else{
                cout <<"Taurus!: You're too stubborn person!" <<endl;
                if(cusp) {
                    cout <<"You were almost born an Aries!" <<endl;
                }
            }
        }else if(month == 5){
            if((day >= 18)&&(day <= 23)) {
                cusp = true;
            }
            
            if(day<=20) {
                cout <<"Taurus!: You're too stubborn person!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Gemini!" <<endl;
                }
            }else{
                cout <<"Gemini!: You switch personalities for different people" <<endl;
                if(cusp){
                    cout <<"You were close to being a Taurus!" <<endl;
                }
            } 
        }else if(month == 6){
            if((day >= 19)&&(day <= 24)) {
                cusp = true;
            }
            
            if(day<=21) {
                cout <<"Gemini!: You switch personalities for different people" <<endl;
                if(cusp){
                    cout <<"You were close to being a Cancer!" <<endl;
                }
            }else{
                cout <<"Cancer!: Stop being a crybaby" <<endl;
                if(cusp){
                    cout <<"You were close to being a Gemini!" <<endl;
                }
            }
        }else if(month == 7){
            if((day >= 20)&&(day <= 25)) {
                cusp = true;
            }
            
            if(day<=22) {
                cout <<"Cancer!: Stop being a crybaby" <<endl;
                if(cusp){
                    cout <<"You were close to being a Leo!" <<endl;
                }
            }else{
                cout <<"Leo!: Lighten that ego!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Cancer!" <<endl;
                }
            }
        }else if(month == 8){
            if((day >= 20)&&(day <= 25)) {
                cusp = true;
            }
            
            if(day<=22) {
                cout <<"Leo!: Lighten that ego!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Virgo!" <<endl;
                }
            }else{
                cout <<"Virgo!: You're selfish!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Leo!" <<endl;
                }
            }
        }else if(month == 9){
            if((day >= 20)&&(day <= 25)) {
                cusp = true;
            }
            
            if(day<=22) {
                cout <<"Virgo!: You're selfish!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Libra!" <<endl;
                }
            }else{
                cout <<"Libra!: Make up your mind already!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Virgo!" <<endl;
                }
            }
        }else if(month == 10){
            if((day >= 20)&&(day <= 25)) {
                cusp = true;
            }
            
            if(day<=22) {
                cout <<"Libra!: Make up your mind already!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Scorpio!" <<endl;
                }
            }else{
                cout <<"Scorpio!: You got too many secrets" <<endl;
                if(cusp){
                    cout <<"You were close to being a Libra!" <<endl;
                }
            }
        }else if(month == 11){
            if((day >= 19)&&(day <= 24)) {
                cusp = true;
            }
            
            if(day<=21) {
                cout <<"Scorpio!: You got too many secrets" <<endl;
                if(cusp){
                    cout <<"You were close to being a Sagittarius!" <<endl;
                }
            }else{
                cout <<"Sagittarius!: You have a rock for a heart" <<endl;
                if(cusp){
                    cout <<"You were close to being a Scorpio!" <<endl;
                }
            }
        }else if(month == 12){
            if((day >= 19)&&(day <= 24)) {
                cusp = true;
            }
            
            if(day<=21) {
                cout <<"Sagittarius!: You have a rock for a heart" <<endl;
                if(cusp){
                    cout <<"You were close to being a Capricorn!" <<endl;
                }
            }else{
                cout <<"Capricorn!: You're the best!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Sagittarius!" <<endl;
                }
            }
        }else if(month == 1){
            if((day >= 17)&&(day <= 22)) {
                cusp = true;
            }
            
            if(day<=19) {
                cout <<"Capricorn!: You're the best!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Aquarius!" <<endl;
                }
            }else{
                cout <<"Aquarius!: Easy on being weird today" <<endl;
                if(cusp){
                    cout <<"You were close to being a Capricorn!" <<endl;
                }
            }
        }else if(month == 2){
            while(day >=29) {
                cout << "There is no such day! Enter a day." <<endl;
                cin >>day;
            }
            if((day >= 16)&&(day <= 21)) {
                cusp = true;
            }
 
            if(day<=18) {
                cout <<"Aquarius!: Easy on being weird today" <<endl;
                if(cusp){
                    cout <<"You were close to being a Pisces!" <<endl;
                }
            }else{
                cout <<"Pisces!: Quit asking for attention" <<endl;
                if(cusp){
                    cout <<"You were close to being a Aquarius!" <<endl;
                }
            }
        }else if(month == 3){
            if((day >= 18)&&(day <= 23)) {
                cusp = true;
            }
            
            if(day<=20) {
                cout <<"Pisces!: Quit asking for attention" <<endl;
                if(cusp){
                    cout <<"You were close to being a Aries!" <<endl;
                }
            }else{
                cout <<"Aries!: Stop bugging people!" <<endl;
                if(cusp){
                    cout <<"You were close to being a Pisces!" <<endl;
                }
            }
        }
        cusp = false;
        
        //Does the user want to repeat?
        cout <<"Try again? (y/n)" <<endl;
        cin >>again;
        again = toupper(again);
        cout <<endl;
    }while (again == 'Y');
    
    cout <<"Good-Bye!" <<endl;
    
    //Exit stage right

    return 0;
}

