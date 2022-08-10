/*
    C++
    string example
*/
#include<iostream>
using namespace std;

int main(){

    //string variable declaration
    string str="Hello World";
    cout<<str   <<endl;

    //string concatenation
    string firstName="Mamunur";
    string lastName="Rashid";
    string fullName=firstName+lastName;  //without space
    fullName=firstName+" "+lastName;     //with space
    cout<<fullName  <<endl;

    //string concatenate using append() function
    string str1="Hi-tech";
    string str2="Park";
    string concat=str1.append(str2);
    cout<<concat  <<endl;

    return 0;
}
