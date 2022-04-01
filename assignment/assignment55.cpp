#define _USE_MATH_DEFINES
 
#include <iostream>
#include <cmath>
#include <string>
 
using namespace std;


char displayMenu(){
  
   char menuSelection = '0';
 
   cout << "Select a geometric object:" << endl
      << endl << "1.Circle"
      << endl << "2.Equilateral Triangle"
      << endl << "3.Square"
      << endl << "4.Cone"
      << endl << "X No Choice" << endl;
 
   cin >> menuSelection;
  menuSelection = toupper(menuSelection);
  return menuSelection;
}
 
int main() {
  
  char menuSelection = '0';
    

  while ((menuSelection = displayMenu()) !='X'){
      switch (menuSelection) {
      case '1':
                  break ;
      case '2':
                  break ;
      case '3':
                  break ;
      case '4':
                  break ;
  
      case 'X':
      case 'x':
                  break ;
      default:
        cout << "Invalid section. The program could not continue." << endl;
        
      }
    menuSelection = displayMenu();
   } 
   return 0;
}
