#include <iostream>
#include <string>
#define PASSINGRADE  65
using namespace std;

int main(){
string studentName;
long grade = 0;


  cout << "entre the student name" << endl;
  cin >> studentName;
  cout << "entre the grade" << endl;
  cin >> grade;
  
  if ((studentName.length() > 0) && (grade >= 0) && (grade <= 100)){
    if (grade >= PASSINGRADE)
      cout << "Congratulations " << studentName << " your grade is " <<grade << ". " << "You have passed the assignment! "<< endl;
    else 
      cout << "Disappointments " << studentName << "your grade is " <<grade << ". " << "and you have failed the assignment."<< endl;
  } else 
      cout << "Invalid data entered."<< endl;
  return 0;
}