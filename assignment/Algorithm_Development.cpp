#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std ;

char displayMenu();
double computeConeSurfaceArea(long , long );
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
<<<<<<< HEAD
=======


void processCircle(){
long radius = 0;
double diameter =0;
double area = 0;
    radius = queryForLong("enter the radius");
        if (radius >=25){
          area = computeCircleArea(radius);
          diameter = computeCircleDiameter(area);
          cout << "The area and diameter of a circle having a radius of "<< radius << "are" << area << "and " << diameter << ", respectively."<< endl;
          } else 
          cout << "Invalid data.  The program could not continue.";
}

long computeTriangleArea (long length){
long height;
long area;
    height = sqrt(3/2)*length;
    area = (length+height)/2;
    return area;
}


long computeTrianglePerimeter(long length){
long perimeter = 0;
    perimeter = 3*length;
    return perimeter;
}
void processEquilateralTriangle(){
long length = 0;
double area =0;
double perimeter = 0;
  length = queryForDouble("enter the length");
  if (length >= 25){
    area = computeTriangleArea(length);
    perimeter = computeTrianglePerimeter(length);
    cout <<"The area and perimeter of an equilateral triangle having a base length of "<< length <<"are " << area << "and " << perimeter <<", respectively. "<< endl;

  }else cout << "Invalid data.  The program could not continue.";


}

long computeSquareArea (long length){
long area = 0;
  area = length^2;
  return area;

}
long computeSquarePerimeter(long length){
  long perimeter = 0;
  perimeter = 4*length;
  return perimeter;
}
void processSquare(){
long length = 0;
double area =0;
double perimeter = 0;
  length = queryForLong("enter the length");
  if (length >= 25){
    area = computeSquareArea(length);
    perimeter = computeSquarePerimeter(length);
    cout << "The area and perimeter of a square having a side length of" << length << "are" << area << "and" << perimeter <<", respectively.";

  }else cout << "Invalid data.  The program could not continue.";

}

double computeConeVolume (long radius, long height){
long volume = 0;

  volume = (1 / 3)*(M_PI*sqrt(radius))*(height);
  return volume;
}
double computeConeSurfaceArea(long radius, long height)
long area = 0; 
  area = M_PI*radius*(radius+height^2+radius^2); 
  return area;

void processCone() {
  radius = queryForLong("enter the radius");
  height = queryForLong("enter the height");
  if ((radius >=25) && (height>=25)){
    volume = computeConeVolume(radius,height);
    area = computeConeSurfaceArea(radius,height);
    cout << "The volume and surface area of a cone have the radius" << radius << "and height" << height <<  "is" << volume <<  "and" << area<< ", respectively." << endl;
  }else
      cout << "Invalid data.  The program could not continue.";


}
>>>>>>> origin/main


void processCircle(){
long radius = 0;
double diameter =0;
double area = 0;
    radius = queryForLong("enter the radius");
        if (radius <=25){
          area = computeCircleArea(radius);
          diameter = computeCircleDiameter(area);
          cout << "The area and diameter of a circle having a radius of "<< radius << "are" << area << "and " << diameter << ", respectively."<< endl;
          } else 
          cout << "Invalid data.  The program could not continue.";
}

long computeTriangleArea (long length){
long height;
long area;
    height = sqrt(3/2)*length;
    area = (length+height)/2;
    return area;
}


long computeTrianglePerimeter(long length){
long perimeter = 0;
    perimeter = 3*length;
    return perimeter;
}
void processEquilateralTriangle(){
long length = 0;
double area =0;
double perimeter = 0;
  length = queryForDouble("enter the length");
  if (length <= 25){
    area = computeTriangleArea(length);
    perimeter = computeTrianglePerimeter(length);
    cout <<"The area and perimeter of an equilateral triangle having a base length of "<< length <<"are " << area << "and " << perimeter <<", respectively. "<< endl;

  }else cout << "Invalid data.  The program could not continue.";


}

long computeSquareArea (long length){
long area = 0;
  area = length^2;
  return area;

}
long computeSquarePerimeter(long length){
  long perimeter = 0;
  perimeter = 4*length;
  return perimeter;
}
void processSquare(){
long length = 0;
double area =0;
double perimeter = 0;
  length = queryForLong("enter the length");
  if (length >= 25){
    area = computeSquareArea(length);
    perimeter = computeSquarePerimeter(length);
    cout << "The area and perimeter of a square having a side length of" << length << "are" << area << "and" << perimeter <<", respectively.";

  }else cout << "Invalid data.  The program could not continue.";

}

double computeConeVolume (long radius, long height){
long volume = 0;

  volume = (1 / 3)*(M_PI*sqrt(radius))*(height);
  return volume;
}
double computeConeSurfaceArea(long radius, long height){
  long area = 0; 
  area = M_PI*radius*(radius+height^2+radius^2); 
  return area;
}


void processCone() {

long  radius = queryForLong("enter the radius");
long  height = queryForLong("enter the height");
  if ((radius <=25) && (height<=25)){
    int volume = computeConeVolume(radius,height);
    int area = computeConeSurfaceArea(radius,height);
    cout << "The volume and surface area of a cone have the radius" << radius << "and height" << height <<  "is" << volume <<  "and" << area<< ", respectively." << endl;
  }else
      cout << "Invalid data.  The program could not continue.";


}

int main() {
   char menuSelection = '0' ;
  
    do {
  // code block to be executed
  
       menuSelection = returnValidMenuOption();
       

  switch (menuSelection) {
            case '1':
              processCircle();
                        break ;
            case '2':
              processEquilateralTriangle();
                        break ;
            case '3':
              processSquare();
                        break ;
            case '4':
              processCone();
                        break ;
         }
   }

  while (menuSelection != 'X');   
   // else {
   //    cout << "Invalid section. The program could not continue." << endl ;
   // }
   return 0 ;
}