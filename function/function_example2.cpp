#include<iostream>
using namespace std;

// Function declaration
void myFunction1();
void myFunction2();

// Parameters function
void myFunction3(string str);
int sum(int a, int b);

// Function with default parameter value
void myFunction4(string name="Jhon");

int main(){

    // function calling
    myFunction1();
    myFunction2();
    myFunction3("ABCD");
    // sum
    sum(10,20);
    myFunction4();
    myFunction4("hasan");

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

// function-3 parameter function
void myFunction3(string str){
    cout<<" I'm from myFunction3:" <<str <<endl;
    return;
}

// function- 4
int sum(int a, int b){

    cout<<"Sum:" <<a+b <<endl;
    return 0;
}

// function-5
void myFunction4(string name){
    cout<<" I'm from myFunction4:" <<name <<endl;
    return;
}
