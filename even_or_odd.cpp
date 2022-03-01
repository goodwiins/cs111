#include <iostream>

using namespace std;

int main(){

long long store = 0;
long long result = 0;

        cout << "can you please entre a value " << endl;
        cin >> store;
        if (store % 2 == 0){

        cout << "The value entered by the user is: " << store << ". The value is even." << endl;
        }
        else {
                cout << "The value entered by the user is: " << store << "." <<endl;
        }
        return 0;
}