    /* 
      File:   main.cpp
      Author: David Macias
     
      Created on January 11, 2016, 9:00 AM
      Purpose: Display truth table and compare swaps
     */
     
    //System Libraries
    #include <iostream>
     
    using namespace std;
     
    //User Libraries
     
    //Global Constants
     
    //Function Prototypes
     
    //Execution Begins here
    int main(int argc, char** argv) {
        // Declare and initialize variables
        bool x= true;
        bool y= true;
        int a=2, b=3, temp;
        //Create Heading
        cout<<"X, Y,!X,!Y,X&&Y,X||Y,X^Y,(X^Y)^Y,(X^Y)^X,!(X&&Y),!X||!Y,!(x||y),!X&&!Y"<<endl;
        //first row
        cout<<(x?'T':'F')<<"  ";
        cout<<(y?'T':'F')<<"  ";
        cout<<(!x?'T':'F')<<"  ";
        cout<<(!y?'T':'F')<<"  ";
        cout<<(x&&y?'T':'F')<<"    ";
        cout<<(x||y?'T':'F')<<"    ";
        cout<<(x^y?'T':'F')<<"    ";
        cout<<((x^y)^y?'T':'F')<<"      ";
        cout<<((x^y)^x?'T':'F')<<"      ";
        cout<<(!(x&&y)?'T':'F')<<"       ";
        cout<<(!x||!y?'T':'F')<<"       ";
        cout<<(!(x||y)?'T':'F')<<"        ";
        cout<<(!x&&!y?'T':'F')<<"        "<<endl;
        //Second Row
        x= true;
        y= false;
        cout<<(x?'T':'F')<<"  ";
        cout<<(y?'T':'F')<<"  ";
        cout<<(!x?'T':'F')<<"  ";
        cout<<(!y?'T':'F')<<"  ";
        cout<<(x&&y?'T':'F')<<"    ";
        cout<<(x||y?'T':'F')<<"    ";
        cout<<(x^y?'T':'F')<<"    ";
         cout<<((x^y)^y?'T':'F')<<"      ";
        cout<<((x^y)^x?'T':'F')<<"      ";
        cout<<(!(x&&y)?'T':'F')<<"       ";
        cout<<(!x||!y?'T':'F')<<"       ";
        cout<<(!(x||y)?'T':'F')<<"        ";
        cout<<(!x&&!y?'T':'F')<<"        "<<endl;
        //Third row
        x= false, y= true;
        cout<<(x?'T':'F')<<"  ";
        cout<<(y?'T':'F')<<"  ";
        cout<<(!x?'T':'F')<<"  ";
        cout<<(!y?'T':'F')<<"  ";
        cout<<(x&&y?'T':'F')<<"    ";
        cout<<(x||y?'T':'F')<<"    ";
        cout<<(x^y?'T':'F')<<"    ";
         cout<<((x^y)^y?'T':'F')<<"      ";
        cout<<((x^y)^x?'T':'F')<<"      ";
        cout<<(!(x&&y)?'T':'F')<<"       ";
        cout<<(!x||!y?'T':'F')<<"       ";
        cout<<(!(x||y)?'T':'F')<<"        ";
        cout<<(!x&&!y?'T':'F')<<"        "<<endl;
        //Fourth Row;
        x = false, y= false;
        cout<<(x?'T':'F')<<"  ";
        cout<<(y?'T':'F')<<"  ";
        cout<<(!x?'T':'F')<<"  ";
        cout<<(!y?'T':'F')<<"  ";
        cout<<(x&&y?'T':'F')<<"    ";
        cout<<(x||y?'T':'F')<<"    ";
        cout<<(x^y?'T':'F')<<"    ";
        cout<<((x^y)^y?'T':'F')<<"      ";
        cout<<((x^y)^x?'T':'F')<<"      ";
        cout<<(!(x&&y)?'T':'F')<<"       ";
        cout<<(!x||!y?'T':'F')<<"       ";
        cout<<(!(x||y)?'T':'F')<<"        ";
        cout<<(!x&&!y?'T':'F')<<"        "<<endl;
        //Swap using temp
        cout<<"\n";
        cout<<"Swap using temp"<<endl;
        cout<<"before swap a="<<a<<"and b="<<b<<endl;
         temp= a;
         a=b;
         b=temp;
        cout<<"after swap a="<<a<<"and b="<<b<<endl;
        //Swap Using exclusive or operator 
        cout<<"\n";
         cout<<"Swap using exclusive or operator"<<endl;
         cout<<"before swap a="<<a<<"and b="<<b<<endl;
          a=a^b;
          b=a^b;
          a=a^b;
        cout<<"after swap a="<<a<<"and b="<<b<<endl;   
        //Output the results
     
        //Exit stage right
        return 0;
    }