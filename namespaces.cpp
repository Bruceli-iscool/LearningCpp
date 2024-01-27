#include <iostream>
// namespaces
namespace first{
   int x = 5;
}

int main() {
    // reclare x
    int x = 0;
    // oop aplies when we print x
    std::cout << x;
    // returns 0 the local x
    // print first x
    std::cout << first::x;
    return 0;
    

}