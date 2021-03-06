#define _USE_MATH_DEFINES
 
#include <iostream>
#include <cmath>
#include <string>
 
using namespace std;


char displayMenu(){
  
   char menuSelection = '0';
 
   cout << "Select a geometric object: \n 1 Circle\n 2 Equilateral Triangle \n 3 Square\n 4 Cone\n X No Choice" << endl;
   cin >> menuSelection;
  menuSelection = toupper(menuSelection);
  return menuSelection;
}

char returnValidMenuOption(){
  if (section =! '1' || section =! '2' || section =! '3' section =! ||'4' section =! 'X')
  return cout<< "Invalid";
  else
  return displayMenu();
}

int main() {
  
long base = 0;
long area = 0;
long perimeter = 0;
long radius = 0;
long diameter = 0;
long volume = 0;
long height = 0;
char menuSelection = '0';
    

  while ((menuSelection = displayMenu()) !='X'){
      switch (menuSelection) {
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
                  break ;
      case '2':
        cout << "enter the base";
        cin >> base;
      if (base >=25){
        height = sqrt(3/2)*base;
        area = (base+height)/2;
        perimeter = 3*base;
    
      cout <<"The area and perimeter of an equilateral triangle having a base length of "<< base <<"are " << area << "and " << perimeter <<", respectively. "<< endl;
      break ;
        } else
      cout << "Invalid data.  The program could not continue.";
      break ;
        
      case '3':
        cout << "enter the base";
        cin >> base;
        if (base >=25){
          area = base^2;
          perimeter = 4*base;
          cout << "The area and perimeter of a square having a side length of" << base << "are" << area << "and" << perimeter <<", respectively.";
          break ;
    } else
      cout << "Invalid data.  The program could not continue.";
      break;
                  
      case '4':
    cout << "enter radius";
    cin >> radius;
    cout << "enter height";
    cin >> height;
    if ((radius >=25) && (height>=25)){
      volume = (1 / 3)*(M_PI*sqrt(radius))*(height);
      area = M_PI*radius*(radius+height^2+radius^2); 
      cout << "The volume and surface area of a cone have the radius" << radius << "and height" << height <<  "is" << volume <<  "and" << area<< ", respectively." << endl;
      break;
    } else
      cout << "Invalid data.  The program could not continue.";
      break;
  
    case 'X':
    break;
    
    default:
      cout << "Invalid section. The program could not continue." << endl;  
      }
    menuSelection = displayMenu();
   } 
   return 0;
}
