// the aear of the circle is A = PI*R^2
// step one store the vaule of pi in variable PI = 3.14
// step two entre the vaule of R.
// step three diplay the answer.

// need to use decim so we can you float datetype for this case, also we need to consider that float takes 4 bite of memoery alocation. 
#include <iostream>
using namespace std;
const double PI = 22.0 / 7.0;

int main(){
    //this complie time binding
long diameter = 0;
double radius = 0.0;
double area = 0.0;
    cout << "enter the value of diameter " << endl;
    cin >> diameter; 
    //run time binding
    radius = diameter / 2.0;
    area = (radius*radius)*PI;

    cout << "the area of the circle with diameter of 10 is " << area << endl;
    
    return 0;
}