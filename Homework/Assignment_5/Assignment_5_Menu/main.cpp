/* 
 * Author: David Macias
 * Created on February 4, 2016, 11:13 PM
 * Purpose: Assignment 5 Menu
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
//****************Prob1 Prototypes*********************
void getInpt(int &, int &);
int timConv(int &, char &);
void shRslts(int, int, char);

//****************Prob2 Prototypes*********************
void getTims(int &, int &, int &, int &);
void tAfter(int, int, int, int);

//****************Prob5 Prototypes*********************
void getChg(int &);
int comCoin(int, int &, int&);

//****************Prob6 Prototypes*********************
void getLgth(int &, int &);
void ft2Mtr(int, int, int &, float &);
void shRslt(int, int, float, float);

//****************Prob9 Prototypes*********************
void getWght(int &, int &);
void lbs2Mtr(int, int, int &, float &);
void shwRslt(int, int, float, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    unsigned short nSoltn;      //Problem Solution to display
    bool reDspl = true;         //Exit Program when false

    //Menu to display solution
    do {
        //Input Problem to display, i.e. Menu
        cout <<endl;
        cout <<"Assignment 5 Problem set" <<endl;
        cout <<"Type 1 to display Savitch 7thEd Chap5 Prob1" <<endl;
        cout <<"Type 2 to display Savitch 7thEd Chap5 Prob2" <<endl;
        cout <<"Type 3 to display Savitch 7thEd Chap5 Prob5" <<endl;
        cout <<"Type 4 to display Savitch 7thEd Chap5 Prob6" <<endl;
        cout <<"Type 5 to display Savitch 7thEd Chap5 Prob9" <<endl;
        cout <<"Type anything else to exit" <<endl;
        cin >>nSoltn;
        cout <<endl;
        
        //Solutions to all the problems
        switch (nSoltn) {
            case 1: {
                int hrs;       //Hours
                int mins;      //Minutes
                char dayInfo;  //AM or PM depending if hrs > 12

                do{
                    //Get the time in 24 hours format
                    getInpt(hrs, mins);

                    //Convert the time to 12 hour format
                    timConv(hrs, dayInfo);

                    //Output results
                    shRslts(hrs, mins, dayInfo);

                    //Ask if user wants to try again
                    cout <<"again?" <<endl;
                    cin >>dayInfo;
                    dayInfo = toupper(dayInfo);
                }while(dayInfo == 'Y');
                break;
            }
            
            case 2: {
                //Declare and initialize variables
                int tmNowHr = 0;
                int tmNowMn = 0;
                int wtTmHr = 0;
                int wtTmMn = 0;
                int tmAfter = 0;

                //Generate the value of change to be processed [1-99]
                getTims(tmNowHr, tmNowMn, wtTmHr, wtTmMn);

                //Output the time now and the wait time
                cout <<"The time now is " <<tmNowHr <<":" <<tmNowMn <<endl;
                cout <<"And the time to wait is " <<wtTmHr <<":" <<wtTmMn <<endl;

                //Process the amount of coins in value for quarters, dimes, pennies
                tAfter(tmNowHr, tmNowMn, wtTmHr, wtTmMn);
                break;
            }
            case 3: {
                //Declare and initialize variables
                const int QRTR = 25;
                const int DIME = 10;
                const int PENNY = 1;
                int chgLeft;
                int num;

                //Generate the value of change to be processed [1-99]
                getChg(chgLeft);

                //Process the amount of coins in value for quarters, dimes, pennies
                comCoin(QRTR, num, chgLeft);
                comCoin(DIME, num, chgLeft);
                comCoin(PENNY, num, chgLeft);
                break;
            }
            
            case 4: {
                //Declare and initialize variables
                int feet;
                int inches;
                int meters;
                float cnMeter;

                //Generate the value of feet and inches
                getLgth(feet, inches);

                //Convert to metric
                ft2Mtr(feet, inches, meters, cnMeter);

                //Output results
                shRslt(feet, inches, meters, cnMeter);
                break;
            }
            
            case 5: {
                //Declare and initialize variables
                int pounds;
                int ounces;
                int kGrms;
                float grms;

                //Generate the value of pounds and ounces
                getWght(pounds, ounces);

                //Convert to metric
                lbs2Mtr(pounds, ounces, kGrms, grms);

                //Output results
                shwRslt(pounds, ounces, kGrms, grms);
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

//*********************Prob 1 Function Definitions******************************
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
 
void shRslts(int hr, int min, char lttr){
	cout <<"The converted time is " <<hr <<":" <<min <<lttr <<endl;
}

//*********************Prob 2 Function Definitions******************************
void getTims(int &stTmHrs, int &stTmMin, int &wtTmHrs, int &wtTmMin){
    srand(static_cast<int>(time(0)));
    stTmHrs = rand()%24+1;
    stTmMin = rand()%60;
    wtTmHrs = rand()%24+1;
    wtTmMin = rand()%60;
}

void tAfter(int hrsNow, int minNow, int hrsWait, int minWait){
    int hrAfter;
    int mnAfter;
    int totMin = minNow + minWait;
    int addHrs = totMin/60;
    hrAfter = hrsNow + hrsWait + addHrs;
    if(hrAfter > 24){
        hrAfter = hrAfter%24;
    }
    mnAfter = totMin%60;
    cout <<"The time after will be " <<hrAfter <<":" <<mnAfter <<endl;
}

//*********************Prob 5 Function Definitions******************************
int comCoin(int denom, int &number, int &left){
    number = left/denom;
    left = left%denom;
    cout <<number <<(denom == 25?" Quarter(s) ":
        denom == 10?" Dime(s) ":" Penny(pennies) ");
}

void getChg(int &value){
    srand(static_cast<int>(time(0)));
    value = rand()%98+1;
    cout <<value <<" Cents can be given as "<<endl;
}

//*********************Prob 6 Function Definitions******************************
void ft2Mtr(int ft, int in, int &mtrs, float &cntMtrs){
    cntMtrs = ((ft*12)+in)*2.54f;
    mtrs = cntMtrs/100;
    cntMtrs -= mtrs*100;
}

void getLgth(int &ft, int &in){
    srand(static_cast<int>(time(0)));
    ft = rand()%11;
    in = rand()%12;
}

void shRslt(int ft, int in, float mtrs, float cntMtrs){
    cout <<ft <<" feet " <<in <<" inches " <<endl;
    cout <<"Converts to " <<mtrs <<" meters and " 
            <<cntMtrs <<" centimeters" <<endl;
}

//*********************Prob 9 Function Definitions******************************
void lbs2Mtr(int lbs, int oncs, int &kGrm, float &grm){
    grm = ((lbs*16)+oncs)*28.3495f;
    kGrm = grm/1000;
    grm -= kGrm*1000;
}

void getWght(int &lbs, int &oncs){
    srand(static_cast<int>(time(0)));
    lbs = rand()%30;
    oncs = rand()%16;
}

void shwRslt(int lbs, int oncs, float kGrm, float grm){
    cout <<lbs <<" pounds " <<oncs <<" ounces " <<endl;
    cout <<"Converts to " <<kGrm <<" kilos and " 
            <<grm <<" grams" <<endl;
}