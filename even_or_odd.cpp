#include <iostream>

using namespace std;

int main(){
long TheInteger = 0 ;


        cout << "Entre a The Integer ";
        cin >> TheInteger;

        cout << "The value entered by the user is: " << TheInteger << ". ";
        
        if ((TheInteger % 2) == 0)
        
            cout << " The value is even.";

        cout << endl;
        return 0;
}