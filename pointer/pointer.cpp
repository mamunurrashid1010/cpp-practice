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

    // -------------- pointer declaration -------------------
    /* three way to declare pointer:
        string* str;  //preffered
        string *str;
        string * str;
    */

    // -------------- dereference -------------------
    cout<<"C++ Dereference:" <<endl;

    // declare variable and assign value
    string testString="ABCD";

    // pointer declaration
    string* testPointer=&testString;

    // Reference: output the memory address of testString with the pointer
    cout<<testPointer <<endl;

    // Dereference: output the value of testString with the pointer
    cout<<*testPointer <<endl;


    // -------------- Modify Pointer Value -------------------
    cout<<"Modify Pointer Value:" <<endl;

    // declare variable and assign value
    string companyName="ABC company";

    // pointer declaration
    string* companyNamePtr=&companyName;

    // print address of variable companyName
    cout<<companyNamePtr <<endl;

    // print value of variable companyName
    cout<<*companyNamePtr <<endl;

    // change value using pointer
    *companyNamePtr="xyz company";

    // print
    cout<<*companyNamePtr <<endl;


    return 0;
}
