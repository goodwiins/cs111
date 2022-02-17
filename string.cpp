#include <iostream>
#include <string>


using namespace std;
int main(int argc, char const *argv[]){
char exit = 'x';
char exit1 = 0x40;
string message = "hello world";


std::cout << message << exit << "they are the same " << exit1 << std::endl;

}
