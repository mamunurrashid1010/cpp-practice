/*
    C++ Variables : Variables are containers for storing data values.

    c++ different type of data types of variable.which are:
    1. int - stores integers (whole numbers), without decimals, such as 123 or -123
    2. double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    3. char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    4. string - stores text, such as "Hello World". String values are surrounded by double quotes
    5. bool - stores values with two states: true or false

*/
#include<iostream>
using namespace std;

int main(){
    // integer type of variable
    int number=10;
    cout<<"Integer:" <<number <<endl;

    double weight=10.44;
    cout<<"Double:" <<weight <<endl;

    char ch='A';
    cout<<"Character:" <<ch <<endl;

    string str="Hello world";
    cout<<"String:" <<str <<endl;

    bool re=true;
    cout<<"Bool:" <<re <<endl;

    return 0;
}
