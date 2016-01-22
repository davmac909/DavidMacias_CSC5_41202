/* 
 * Author: David Macias
 * Created on January 19, 2016, 8:32 AM
 * Purpose: Assignment_4
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
        cout <<"Type 1 to display Savitch 7thEd Chap3 Prob10" <<endl;
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
                cout <<"Solution to Savitch 7thEd Chap3 Prob10: ";
                cout <<"The Fibonacci Sequence" <<endl;

                //Declare Variables
                unsigned int fi, fim1,fim2; //Designations in the sequence
                unsigned short nTerms;      //Number of turns in the sequence
                unsigned short counter;     //Current position in the sequence
                const char DREPRO = 5;      //Days to Reproduce
                unsigned int nDays;         //Number of days
                float crdWght;              //Initial Crud Weight
                char again;                 //Response to run the program again

                do {
                    //Initialize the sequence
                    fim2 = fim1 = 1;            //Start the Sequence
                    counter = 2;                //Initialize the counter

                    //Input number of terms    
                    cout <<"Enter the initial Crud Weight" <<endl;
                    cin >>crdWght;
                    cout <<"How many days will the crud be allowed to grow?" <<endl;
                    cin >>nDays;

                    //Calculate the number of terms
                    nTerms = nDays/DREPRO+1;

                    //Calculate the output required
                    if(nTerms == 1) { 
                        cout <<"The crud weight after " <<nDays <<" is " <<fim2*crdWght <<" (lbs)." <<endl;
                    }else if(nTerms == 2) {
                        cout <<"The crud weight after " <<nDays <<" is " <<fim1*crdWght <<" (lbs)." <<endl;
                    }else{
                        do{
                            fi = fim1+fim2;
                            counter++;
                            fim2 = fim1;
                            fim1 = fi;
                        }while(counter<nTerms);
                        cout <<"The crud weight after " <<nDays <<" is " <<fi*crdWght <<" (lbs)." <<endl;
                    }
                    cout <<"Calculate again (y/n)?" <<endl;
                    cin >>again;

                }while(again == 'y'||again == 'Y');
                break;
            }
            
            case 2: {
                cout <<"Solution to Savitch 7thEd Chap3 Prob11: ";
                cout <<"Approximated e^x" <<endl;

                //Declare and initialize variables
                const unsigned char nTerms = 13;
                float etox = 1, x;                //e^x

                //input value of x
                cout <<"Enter  of e^x computation." <<endl;
                cin >>x;

                //Calculate e^x
                for (int n=1; n<=nTerms; n++) {
                    //Declare Variables
                    unsigned int factN = 1;        //N and N!

                    //Calculate the output required
                    for (int i=1; i<=n; i++) {
                        factN *= i;
                    }

                    //Calculate e^x with the above factorial
                    etox += pow(x,n)/factN;
                }

                //output results
                cout <<"The exact value of e^" <<x <<" = " <<exp(x) <<endl;
                cout <<"The approx. value of e^" <<x <<" = " <<etox <<endl;
                break;
            }
            case 3: {
                cout <<"Solution to Savitch 7thEd Chap3 Prob1: ";
                cout <<"Rock, Paper, Scissors!" <<endl;
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
                break;
            }
            
            case 4: {
                cout <<"Solution to Savitch 7thEd Chap3 Prob3: ";
                cout <<"Zodiac Signs and Horoscopes" <<endl;
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
                break;
            }
            
            case 5: {
                cout <<"Solution to Savitch 7thEd Chap3 Prob5: ";
                cout <<"Total Cost of a Long Distance Call" <<endl;
                
                //Initialize and declare Variables 
                int strtTimHrs;
                int strtTimMin;
                char fstLttr;
                char secLttr;
                unsigned int mnts;
                char again;
                const float FRATE = 0.40f;
                const float SRATE = 0.25f;
                const float LRATE = 0.15f;
                float totCost;

                //Set what days the week and weekend are
                bool week= (fstLttr == 'M'||fstLttr == 'm'&& secLttr == 'O'||secLttr == 'o'||
                fstLttr == 'T'||fstLttr == 't'&& secLttr == 'U'||secLttr == 'u'||
                fstLttr == 'W'||fstLttr == 'w'&& secLttr == 'E'||secLttr == 'e'||
                fstLttr == 'T'||fstLttr == 't'&& secLttr == 'H'||secLttr == 'h'||
                fstLttr == 'F'||fstLttr == 'f'&& secLttr == 'R'||secLttr == 'r');
                bool weekend = (fstLttr == 'S'||fstLttr == 's'&& secLttr == 'A'||secLttr == 'a'||
                fstLttr == 'S'||fstLttr == 's'&& secLttr == 'U'||secLttr == 'u');

                

                do {
                    //get the two letters of the day of the week
                    cout <<"what day of the week did you make the call? "
                    <<"(only use first two letters of the day of the week)" <<endl;
                    cin >>fstLttr;
                    cin >>secLttr;
                    cout <<"At what time (in 24-hour notation) was the call started?" <<endl;
                    cin >>strtTimHrs >>strtTimMin;
                    //cout <<":";
                    //cin >>strtTimMin;

                    cout <<endl;
                    cout <<"What was the length of the call in minutes?" <<endl;
                    cin >>mnts;
                    
                    //calculate total cost
                    if(week = true) {
                            if (strtTimHrs >= 8 && strtTimHrs <=18){
                                    totCost = mnts*FRATE;
                            }else{
                            totCost = mnts*SRATE;
                            }
                    }
                    if (weekend = true){
                            totCost = mnts*LRATE;

                    }
                    
                    //Output results
                    cout <<"The total cost for this call is $" <<totCost <<endl;
                    cout <<"do again? (y/n)" <<endl;
                    cin >>again;

                }while (again == 'y'||again =='Y');
                break;
            }
            
            case 6: {
                cout <<"Solution to Savitch 7thEd Chap3 Prob7: ";
                cout <<"Roman Numeral Conversion" <<endl;
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