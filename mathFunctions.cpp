#include <iostream>

int main() {
    double x  = 3;
    double y = 4;
    double z;
    // max function returns largest num
    z = std::max(x, y);
    std::cout << z << "\n";
    // min function returns smallest num
    double yx;
    yx = std::min(x, y);
    std::cout << yx << "\n";
    // power
    z = std::pow(2, 3);
    std::cout << z << "\n";
    // returns 8
    // square root
    z = std::sqrt(5);
    std::cout << z << "\n";
    return 0;
}