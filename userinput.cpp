#include <iostream>
#include <string>

using namespace std;
int main() {
    // get user input using cin
    string name;
    // format: cin << variable to store in;
    cin >> name;
    cout << name;
    // type in string with spaces
    string fullname = "";
    cout << "\nWhat is your fullname?\n";
    getline(std::cin, fullname);
    cout << fullname;
    cin >> fullname;
    return 0;
}