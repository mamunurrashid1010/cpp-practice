/*
    C++ practice
    Here i show how to input value from user and how to assign variable;
*/

#include<iostream>
using namespace std;

int main(){
    int value;
    cout<<"Enter value:";
    //input value form user
    cin>>value;
    //output
    cout<<"value is:" <<value <<endl;

    //sum of two value
    int v1,v2,sum;
    cout<<"Sum of two value program"<<endl;
    cout<<"Enter value-1:";
    cin>>v1;
    cout<<"Enter value-2:";
    cin>>v2;

    sum=v1+v2;
    cout<<"sum:" <<sum <<endl;

    return 0;
}

