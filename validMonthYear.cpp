
#include <iostream>
#define EPOCH_YEAR 1893
using namespace std;



bool isMonthValid(long);
long returnDaysInMonth(long , long);
bool isLeapYear(long);
bool isYearValid(long);


bool isMonthValid(long month){
  return (((month >= 1 && month <=12))? true:false);
}

bool isLeapYear(long year){
  if ((year > 0))
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)? true:false);  
}

bool isYearValid(long year){
  return ((year >= EPOCH_YEAR) ? true:false);
}

bool isDayValid(long year, long month, long day){
bool result = false;
  if ((month >= 1) && (day <= returnDaysInMonth(year,month))){
    result = true;
  }
  else result = false;
  return result;
}

long returnDaysInMonth(long year, long month){
  long days = 0;
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
 days = 31;
  else if (month == 2)
   days = (isLeapYear(year) == 1) ? 29 : 28;
  else
   days = 30;
  return days;
}

int main(){
long month = 0;
long year = 0;
  
  // cout << "Enter a month: " ;
  // cin >> month ;
  // // cout << "Enter a year: " ;
  // // cin >> year ;
  // cout << isMonthValid(month);
  cout << " O is valid " << ((isDayValid(2100,2,31) == 0) ? "false" : "true") << endl;
  cout << " O is valid " << ((isDayValid(2000,2,28) == 0) ? "false" : "true") << endl;
  cout << " O is valid " << ((isDayValid(1900,2,29) == 0) ? "false" : "true") << endl;
  // cout << returnLeapYear(year);
  
  return 0;
}