// Your First C++ Program

#include <iostream>



char displayMenu(){
  
   char menuSelection = '0';
 
   cout << "Select a geometric object: \n 1 Circle\n 2 Equilateral Triangle \n 3 Square\n 4 Cone\n X No Choice" << endl;
   cin >> menuSelection;
  menuSelection = toupper(menuSelection);
  return menuSelection;
}




int main() {
  returnValidMenuOption();
  return 0;
}