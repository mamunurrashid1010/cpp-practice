/*
    C++
    Arithmetic operators example
*/

#include<iostream>
using namespace std;

int main(){

    //Addition
    int num1=100;
    int num2=200;
    cout<<"Sum:" <<num1+num2 <<endl;

    //Subtraction
    cout<<"Subtraction:" <<num1-num2 <<endl;

    //Multiplication
    cout<<"Multiplication:" <<num1*num2 <<endl;

    //Division
    cout<<"Division:" <<num2/num1 <<endl;

    //Modulus
    int a=11;
    int b=2;
    int c=(a%b);
    cout<<"Modulus:" <<c <<endl;

    //Increment
    int count=0;
    count++;;
    cout<<"Increment:" <<count<<endl;

    //e
    int count1=0;
    count1++; //1
    count1--; //0
    cout<<"Increment:" <<count1<<endl;

    return 0;
}
