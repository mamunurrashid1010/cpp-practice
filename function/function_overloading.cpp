/*
    C++
    Function Overloading Example
    => function overloading, multiple functions can have the same name with different parameters.
*/
#include<iostream>
using namespace std;

// function
int myFunction(int a){
    cout<<a <<endl;
    return 0;
}
// function
double myFunction(double a){
    cout<<a <<endl;
    return 0;
}

// function
int sum(int a,int b){
    cout<<"sum:" <<a+b <<endl;
    return 0;
}
// function
double sum(double a,double b){
    cout<<"sum:" <<a+b <<endl;
    return 0;
}

int main(){
    // function call
    myFunction(10);
    myFunction(10.5656);
    sum(100,150);
    sum(100.5,150.6);

    return 0;
}
