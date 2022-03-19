#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(){
long base = 0;
long lenght = 0;
long area = 0;
long preimeter = 0;
long radius = 0;
long diameter = 0;
char choice;
    cout << "Select a geometric object: \n 1  Circle\n 2 Equilateral Triangle \n 3 Square\n 4  Cone\n X  No Choice" << endl;
    cin >> choice;
  
switch(choice) {
  case '1':
    cout << "enter the radius";
    cin >> radius;
    area= M_PI*sqrt(radius);
    diameter = 2*radius;

    // code block
    cout << "1ok";
    break;
  case '2':
    // code block
    cout << "2";
    break;
    case '3':
    // code block
    cout << "3";
    break;
    case '4':
    // code block
    cout << "4";
    break;
    case 'x':
    // code block
    cout << "x";
    break;
    case 'X':
    // code block
    cout << "X";
    break;
  default:
    cout << "error" << endl;
}




  
}