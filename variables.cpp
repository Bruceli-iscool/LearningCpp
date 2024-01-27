#include <iostream>

using namespace std;

int main() {
    int x; // declare variable as a whole integer
    x = 5; // assign value to variable
    int age = 11;
    // declare a double
    double price = 1.2; // with a decimal
    double decimal = 2.5;
    double gpa = 3.5;
    // char stores a single character
    char grade = 'A';
    char currency= '$';
    // booleans (true/false)
    bool istrue = true;
    bool fals = false;
    // strings
    char a[] = "bill";
    // or
    string name = "billy";
    cout << x + age + price;
    cout << "\nHis grade is " << grade;
    cout << "\nThat will be " << currency << price;
    cout << "\nHis name is " << a << ", his nickname is " << name;
    return 0;
}