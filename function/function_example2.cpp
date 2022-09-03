#include<iostream>
using namespace std;

// Function declaration
void myFunction1();
void myFunction2();

int main(){

    // function calling
    myFunction1();
    myFunction2();

    return 0;
}

// function-1 definition
void myFunction1(){
    cout<<" I'm from myFunction1" <<endl;
    return;
}

// function-2 definition
void myFunction2(){
    cout<<" I'm from myFunction2" <<endl;
    return;
}
