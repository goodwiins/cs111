#include <iostream>

using namespace std;

int main(){
long TheInteger = 0 ;


        cout << "Entre a The Integer " << endl;
        cin >> TheInteger;

        cout << "The value entered by the user is: " << TheInteger << "." <<endl;
        
        if ((TheInteger % 2) == 0)
        
            cout << "The value entered by the user is: " << TheInteger << ". The value is even." << endl;
        
        return 0;
}