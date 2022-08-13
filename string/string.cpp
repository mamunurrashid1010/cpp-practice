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

    //number string
    string a="10";
    string b="20";
    string c=a+b;
    cout<<c <<endl;

    //string length
    string txt="abcdefghij";
    int len=txt.length();
    cout<<"The string length is:" <<len <<endl;

    //access string by index number
    string str3="Hello";
    cout<<str3[0] <<endl;
    cout<<str3[1] <<endl;
    cout<<str3[2] <<endl;
    cout<<str3[3] <<endl;
    cout<<str3[4] <<endl;

    //change string character by index number
    str3[0]='j';
    cout<<str3 <<endl;

    //string input from user
    firstName;
    cout<<"Enter your first name:";
    cin>>firstName;
    cout<<"You'r name is " <<firstName <<endl;

    //sting input from user with whitespace
    fullName;
    cout<<"Enter your full name:";
    getline(cin,fullName);
    cout<<"You'r full name is" <<fullName <<endl;

    return 0;
}
