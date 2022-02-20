/* 
The problem statement is that we need to get two values and sum them together. 
Then output the message.  
	First step: gets the first value, then get the sec value from the user. 
	Sec step: sum the two values together. 
	third step: display the message. 
the value type should be int for the a, b, sum. From the fact that int takes 4 bytes of memory for each.
 */



#include <iostream>
#include <string>

using namespace std;

int a;
int b;
int sum = 0;
int main(){

    cout << "can you please entree two values" << endl;
    cin >> a >> b;
    
    sum = a + b;
    
    cout << "The sum of " << a << "and " << b << " is " << sum << endl;
    
    return 0;

}