    #include <iostream>
    using namespace std;
     
    int main() {
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
        
     
    	bool week = (fstLttr == 'M'||fstLttr == 'm'&& secLttr == 'O'||secLttr == 'o'||
    	fstLttr == 'T'||fstLttr == 't'&& secLttr == 'U'||secLttr == 'u'||
    	fstLttr == 'W'||fstLttr == 'w'&& secLttr == 'E'||secLttr == 'e'||
    	fstLttr == 'T'||fstLttr == 't'&& secLttr == 'H'||secLttr == 'h'||
    	fstLttr == 'F'||fstLttr == 'f'&& secLttr == 'R'||secLttr == 'r');
        
    	bool weekend = (fstLttr == 'S'||fstLttr == 's'&& secLttr == 'A'||secLttr == 'a'||
    	fstLttr == 'S'||fstLttr == 's'&& secLttr == 'U'||secLttr == 'u');
        
        do {
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
    	cout <<"The total cost for this call is $" <<totCost <<endl;
        cout <<"do again? (y/n)" <<endl;
        cin >>again;
                
    }while (again == 'y'||again =='Y');
    	// your code goes here
    	return 0;
    }