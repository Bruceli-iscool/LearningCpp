#include <iostream>

using namespace std;

void main() {
    // constant is a value that cannot change
    // use const keyword
    // the compilier will make sure it does not change
    const double pi = 3.14159;
    double radius = 10;
    double circumfrence = 2* pi *radius;

    cout << "The circumfrence is "<< circumfrence;
}