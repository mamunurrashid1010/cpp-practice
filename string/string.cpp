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
    string fullName=firstName+lastName; //without space
    fullName=firstName+" "+lastName; //with space
    cout<<fullName  <<endl;


    return 0;
}
