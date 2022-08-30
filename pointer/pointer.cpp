/*
    C++ Pointers
*/
#include<iostream>
using namespace std;

int main(){
    string name="Jon";
    // pointer variable
    string* ptr=&name;

    // output the value of name
    cout<<name <<endl;

    // output the memory address of name
    cout<<&name <<endl;

    // output the memory address of name with the pointer
    cout<<ptr <<endl;

    return 0;
}
