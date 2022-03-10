#include <iostream>
using namespace std;



int main(){
long year = 0;
long month = 0;
bool LeapYear = 0;
long days = 0;
    
    cout << " Entre the year\n";
    cin >> year;
    
    if (year <= 0){
        cout << "entre the year again\n";
        cin >> year;
        cout << " Entre the month\n";
        cin >> month;
         if (month < 0 || month >12){
            cout << " The month entred is wrong\n";
        } 
    } else {
        cout << " Entre the month\n";
        cin >> month;
        if (month < 0 || month >12){
            cout << " The month entred is wrong\n";
        } 
     }
       
    if  (((year % 4==0) && (year % 100 != 0)) || (year % 400==0)){
        LeapYear = 1;
    }else LeapYear = 0;
    
    
    
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8
	||month == 10 || month==12)	{
		days = 31; }
    else if (month == 2){
        days = (LeapYear==1)? 29 : 28;
    }
	else 		{
        days = 30;
    }
		
       

    cout << "The number of days in " << month << "," << year << "is " << days << " " << endl;
    // month, year, day, is leap year.


    }
