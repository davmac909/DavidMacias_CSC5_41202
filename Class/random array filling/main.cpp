/* 
 * Author: David Macias
 * Created on January 25, 2016, 8:36 AM
 * Purpose: Power Function Example
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(int[], int);
void prntAry(int[], int, int);
void swap(int &, int &);
void lstSml(int[], int, int);
void markSrt(int[], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<int>(time(0)));
    
    //Declare variables
    const int SIZE = 100;
    int array[SIZE];
    
    //Fill the array
    fillAry(array, SIZE);
    
    //Print the array
    prntAry(array, SIZE, 10);
    
    //Test finding the smallest element in the list
    markSrt(array, SIZE);
    
    //Print the array
    prntAry(array, SIZE, 10);

    return 0;
}

//*************************Fill Array******************************************/
//Inputs
//  a->List
//  n->Size of array
//Outputs:
//  a->List initialized with random 2 digit numbers
/******************************************************************************/
void fillAry(int a[], int n){
    //Loop and fill the array with random numbers
    for(int i = 0; i < n; i++){
        a[i] = rand()%90+10; //[10-99]]
    }
}

//*************************Fill Array******************************************/
//Inputs
//  a->List
//  n->Size of array
//Outputs:
//  a->List initialized with random 2 digit numbers
/******************************************************************************/
void prntAry(int a[], int n, int perLine){
    cout <<endl;
    for(int i = 0; i < n; i++){
        cout << a[i] <<" ";
        if(i%perLine == (perLine-1)) cout <<endl;
    }
    cout <<endl;
}

//*************************Swap Variables**************************************/
//Inputs
//  a->First Variable
//  b->Second Variable
//Outputs:
//  a->First Variable with value of b
//  b->Second Variable with value of a
/******************************************************************************/
void swap(int &a, int &b){
    a=a^b;  //Exclusive or XOR 
    b=a^b;
    a=a^b;
}

//*************************Smallest in List ***********************************/
//Inputs
//  a->Array or list
//  n->Size of list
//  pos->To place smallest in list that follows
//Outputs:
//  a[pos]->Smallest element in [a[pos], a[n-1]]
/******************************************************************************/
void lstSml(int a[], int n, int pos){
    for(int i = pos+1; i < n; i++){
        if(a[pos]>a[i])swap(a[pos], a[i]);
    }
}

//*************************Smallest in List ***********************************/
//Inputs
//  a->Array or list
//  n->Size of list
//  pos->To place smallest in list that follows
//Outputs:
//  a[pos]->Smallest element in [a[pos], a[n-1]]
/******************************************************************************/
void markSrt(int a[], int n){
    for(int i = 0; i < n-1; i++){
        lstSml(a, n, i);
    }
}