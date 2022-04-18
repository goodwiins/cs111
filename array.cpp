#include <iostream>

using namespace std;
const int NBR_OF_MONTH = 12;
int main(){
int daysinmonth[NBR_OF_MONTH] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int i = 0;
for (i = 0; i < NBR_OF_MONTH; i++){
  cout << i + 1<< " "<< daysinmonth[i] << endl; 
}
cout << i << endl;

  
}