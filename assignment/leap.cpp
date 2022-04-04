/*
Programmer: Abdelghafour El Bikha.
This is algorithm development 4. This program was wr1itten on a windows computer using Word.
*/
#include <iostream>
using namespace std;
int main(){
long year = 0;
long month = 0;
bool leapYear = 0;
long days = 0;
  
 cout << "Enter the year\n";
 cin >> year;
 cout << "Enter the month\n";
 cin >> month;
 if ((year > 0) && (month >=1) && (month <=12)){
 leapYear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)? 1:0);
 if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
 days = 31;
 else
 if (month == 2)
 days = (leapYear == 1) ? 29 : 28;
 else
 days = 30;

 cout << "The number of days in " << month << "/" << year << " is " << days << "." << endl;
 }
 else
 cout << "the values entired are wrong" << endl;
 return 0;
 }