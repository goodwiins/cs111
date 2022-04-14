#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std ;

char displayMenu();
char displayMenu(){
  
   char menuSelection = '0';
 
   cout << "Select a geometric object: \n 1 Circle\n 2 Equilateral Triangle \n 3 Square\n 4 Cone\n X No Choice" << endl;
   cin >> menuSelection;
  menuSelection = toupper(menuSelection);
  return menuSelection;
}

char returnValidMenuOption(){
char section = displayMenu();
  if ( section != '1' && section != '2' && section != '3' && section != '4' && section != 'X'){
    cout<< "Invalid";
  }
  else
  return section;
}

long queryForLong (string prompt){
long value = 0;
    cout<< prompt << endl;
    cin >> value;
  return value;
  
}

double queryForDouble (string prompt){
double value = 0;
    cout<< prompt << endl;
    cin >> value;
  return value;
}

double computeCircleArea (long radius){
double area = 0;
  area= M_PI*sqrt(radius);
  return area;
}

double computeCircleDiameter(long radius){
double diameter =0;
    diameter = 2*radius;
  return diameter;
}
void processCircle() 


int main() {
   char menuSelection = '0' ;
  
    do {
  // code block to be executed
  
       menuSelection = returnValidMenuOption();
       

  switch (menuSelection) {
            case '1':
                        break ;
            case '2':
                        break ;
            case '3':
                        break ;
            case '4':
                        break ;
            
         }
    
   }

  while (menuSelection != 'X');
   
   // else {
   //    cout << "Invalid section. The program could not continue." << endl ;
   // }
   return 0 ;
}


