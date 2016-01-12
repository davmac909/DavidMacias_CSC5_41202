//System Libraries
#include <iostream>
using namespace std;
 
//User Libraries
 
//Global Constants
 
//Function prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables problem 1
    unsigned char A=90,B=80,C=70,D=60;//Grade Breakpoints
    unsigned short score;             //Score
    unsigned char grd1,grd2,grd3,grd4;//4 different constructs
 
    //Input data
    cout<<"Input the Score for a grade"<<endl;
    cin>>score;
 
    //Output the score
    cout<<"The score is "<<static_cast<int>(score)<<"%"<<endl;
 
    //Determine the score with ternary
    grd1=(score>=A?'A':
         (score>=B?'B':
         (score>=C?'C':
         (score>=D?'D':'F'))));
 
    //Determine the score with dependent if's
    if     (score>=A) grd2='A';
    else if(score>=B) grd2='B';
    else if(score>=C) grd2='C';
    else if(score>=D) grd2='D';
    else              grd2='F';
 
    //Determine the score with independent if's
    if(score>=A)            grd3='A';
    if(score>=B && score<A) grd3='B';
    if(score>=C && score<B) grd3='C';
    if(score>=D && score<C) grd3='D';
    if(score<D)             grd3='F';
 
    //Determine the score with the switch
	switch(score>=A){
		case true:grd4='A';break;
		default:
		   switch(score>=B){
		      case true:grd4='B';break;
		      default:
		         switch(score>=C){
		            case true:grd4='C';break;
		            default:
		               switch(score>=D){
		                  case true:grd4='D';break;
		                  default:  grd4='F';
	                   }
	             }
	       }
	}
 
	//Output the result
	cout<<"Your grade with Ternary Operator = "<<grd1<<endl;
	cout<<"Your grade with Dependent if     = "<<grd2<<endl;
	cout<<"Your grade with Independent if   = "<<grd3<<endl;
    cout<<"Your grade with Switch/Case      = "<<grd4<<endl;
 
    //Exit stage right
    return 0;
}