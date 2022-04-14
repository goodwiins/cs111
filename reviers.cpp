#include <iostream>

using namespace std;

int main(){
long number = 0;
long quotiont = 0;
long remainder = 0;
long reverad = 0;

  number = 38754;
  cout << "the number" << number << endl;
  quotiont = number;
  while (quotiont != 0){
    remainder = quotiont % 10;
    reverad = (reverad * 10) + remainder;
    quotiont = quotiont / 10;

    
  }
cout << reverad;
  return 0;
}