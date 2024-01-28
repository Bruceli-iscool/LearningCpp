#include <iostream>
// type conversion
int main() {
    int x = 5;
    // convert into double
    int y = (double) 5.12;
    char str = 100;
    // outputs a acsi character
    std::cout << y;
    std::cout << " "<<str;
    // or 
    std::cout << " " << (char) 100;
    // outputs d
    return 0;
}