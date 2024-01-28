#include <iostream>
// math


int main() {
    int students = 21;
    // add one
    students = students + 1;
    // increment operator also adds one
    students++;
    // subtraction
    students = students -1;
    // or
    students-=1;
    // decrement by one
    students--;
    // multiplacation
    students = students*2;
    // or
    students*=2;
    // division
    students = students / 2;
    // or
    students/=2;
    // with remainder
    int num = 20;
    int floater = num % 3; 
    // math problem
    int mathprob = 1 - 2*(4*5+3);

    std::cout << students << " " << floater<< " "<<mathprob;
    return 0;
}