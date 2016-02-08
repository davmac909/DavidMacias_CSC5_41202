/* 
 * Author: David Macias
 * Created on January 25, 2016, 8:36 AM
 * Purpose: Mark Sort: array to pointer to notation
 */

//System Libraries
#include <iostream> //I/O
#include <fstream>  //Input/Output files
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char* argv[]) {
    ifstream fin;
    int next;
    int max = 0, min = 10000;
    
    fin.open("numbers.txt");
    
    while(fin >> next){
        if(next > max){
            max = next;
        }else if(next < min){
            min = next;
        }
    }
    cout <<"Maximum number is = " <<max <<endl;
    cout <<"Minimum number is = " <<min <<endl;
    fin.close();
    
    return 0;
}

