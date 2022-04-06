
#include <iostream>
using namespace std;


bool returnVaildMonth(int month){

  return (((month >= 1 && month <=12))? true:false);
 
}
bool returnLeapYear(int year){
bool leapYear = true;
  if ((year > 0)){
    leapYear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)? true:false);
  } else 
    leapYear = false;
 
  return leapYear;
}

int main(){
int month = 0;
int year = 0;
  
  cout << "Enter a month: " ;
  cin >> month ;
  cout << "Enter a year: " ;
  cin >> year ;
  cout << returnVaildMonth(month);
  cout << returnLeapYear(year);
  
  return 0;
}