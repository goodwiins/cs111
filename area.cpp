/* 
programmer: Abdel El Bikha.

This is algorithm development 3. This program was written on a windows computer using Word.

*/
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main(){

double circumference = 0;
double radius = 0.0;
double area = 0.0;
    
    cout << "enter the circumference " << endl;
    cin >> circumference;

    radius = circumference / (2 * M_PI);

    area = (radius*radius)*M_PI;

    cout << "The area of a circle with a circumference of " << circumference << " is " << area << endl;
    
    return 0;
}
