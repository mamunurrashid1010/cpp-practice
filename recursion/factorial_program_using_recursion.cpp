/*
    Factorial program using recursion in C++
*/
#include<iostream>
using namespace std;

// factorial calculation function
int fact(int number){
    if(number ==0)
        return 1;

    int result=number*fact(number-1);
        return result;

}

int main(){

    int n;
    cout<<"Factorial Program" <<endl;
    cout<<"Enter value: ";
    cin>>n;

    // function call
    cout<<"The factorial of " <<n <<" is: " <<fact(n) <<endl;

    return 0;
}
