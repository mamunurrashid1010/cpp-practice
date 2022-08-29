/*
    C++ References
    A reference variable is a "reference" to an existing variable, and it is created with the & operator:
*/
#include<iostream>
using namespace std;

int main(){

    // ------------- Create reference---------------
    // variable
    string name="Jhon";
    // reference to name variable
    string &a=name;

    cout<<name <<endl;
    cout<<a <<endl;

    // ------------- memory address ---------------
    string str="test";
    cout<<str <<endl;
    cout<<&str <<endl;

    return 0;
}
