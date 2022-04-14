#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

char displayMenu(){
  char choice = '0';
  cout << "Select a geometric object: \n 1 Circle\n 2 Equilateral Triangle \n 3 Square\n 4 Cone\n X No Choice" << endl;
  
  cin >> choice;
  
  return choice;
}


int main(){
long base = 0;
long lenght = 0;
long area = 0;
long perimeter = 0;
long radius = 0;
long diameter = 0;
long volume = 0;
long h = 0;
long r = 0;
char choice = 'x';
   
Do {
char choice = 'x';
choice = displayMenu();

} while (choice!='X' || choice!='x');


  if (choice == '1' || choice == '2' || choice == '3' || choice == '4'||choice == '5'){  
    switch(choice){
    case '1':
      cout << "enter the radius";
      cin >> radius;
      if (radius >=25){
        area= M_PI*sqrt(radius);
        diameter = 2*radius;
        cout << "The area and diameter of a circle having a radius of "<< radius << "are" << area << "and " << diameter << ", respectively."<< endl;
      break;
    } else
        cout << "Invalid data.  The program could not continue.";

    case '2':
      cout << "enter the base";
      cin >> base;
    if (base >=25){
      h = sqrt(3/2)*base;
      area = (base+h)/2;
      perimeter = 3*base;
    // code block
      cout <<"The area and perimeter of an equilateral triangle having a base length of "<< base <<"are " << area << "and " << perimeter <<", respectively. "<< endl;
   } else
      cout << "Invalid data.  The program could not continue.";
    break;

    case '3':
      cout << "enter the base";
      cin >> base;
      if (base >=25){
        area = base^2;
        perimeter = 4*base;
      cout << "The area and perimeter of a square having a side length of" << base << "are" << area << "and" << perimeter <<", respectively.";
    } else
      cout << "Invalid data.  The program could not continue.";
      break;
    case '4':
    cout << "entre r";
    cin >> r;
    cout << "entre h";
    cin >> h;
    if ((r >=25) && (h>=25)){
      volume = (1 / 3)*(M_PI*sqrt(r))*(h);
      area = M_PI*r*(r+h^2+r^2); 
      cout << "The volume and surface area of a cone have the radius" << r << "and height" << h <<  "is" << volume <<  "and" <<         area<< ", respectively.";
    } else
      cout << "Invalid data.  The program could not continue.";
      break;

  case 'x':
    // code block
    cout << "Okey see you again!";
    break;
}
  } else 
     cout << "Invalid section.  The program could not continue." << endl;
  return 0;
}