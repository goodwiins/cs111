#define JAN 1
#define DEC 12

#include <iostream>
using namespace std;

const int EPOCH_YEAR = 1898 ;


int returnDaysInMonth(int month, int year){
int  days = 0;
bool leapYear = 0;

    if ((year > 0) && (month >=1) && (month <=12)){
 leapYear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)? 1:0);
      if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
         days = 31;
      else
          if (month == 2)
            days = (leapYear == 1) ? 29 : 28;
      else
        days = 30;
return days;
  }
}


int main(){
int month = 0;
int year = 0;
int day = 0;

  while ( year < EPOCH_YEAR) {
   cout << "Enter a year: " ;
   cin >> year ;
 }

  while ( (month < JAN) || (month > DEC) ) {
   cout << "Enter a month: " ;
   cin >> month ; 
}

  while ( (day < 1) || (day > (returnDaysInMonth(month,year))) ) {
   cout << "Enter a day: " ;
   cin >> day ;
 }
  
  cout << "The number of days in " << month << "/" << year << " is " << returnDaysInMonth(month,year) << "." << endl;


return 0;
  
}

// function that given a month will return true if it is valid month.
