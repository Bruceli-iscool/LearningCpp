#include <iostream>
#include <vector>

// give a datatype a nickname
typedef std::vector<std::pair<std::string, int>> pairlist;
// typedef std::string str;
// using keyword
using str = std::string;;
using in = int;



using namespace std;
int main() {
    // use the identifier
    pairlist pairlit;
    str Name = "John";
    in age = 5;
    cout << Name << " is " << age;
    return 0;
   
}