/*
    C++
    Assignment operator example
*/
#include<iostream>
using namespace std;

int main(){
    int value=10;

    value+=10;  //value=value+10;

    value-=5;   //value=value-5;

    value*=2;

    value/=3;

    value%=6;

    value&=5;

    cout<<"Value:"  <<value <<endl;

    return 0;
}
