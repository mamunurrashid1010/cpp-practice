/*
    C++ Recursion
*/

// sum 1 to n recursion function
int sum(int n){
    if(n==0)
        return 0;

    int summation=n+sum(n-1);
    return summation;
}

#include<iostream>
using namespace std;

int main(){

    // recursion function calling
    cout<<"The sum of 1 to 5: " <<sum(5) <<endl;
    cout<<"The sum of 1 to 10: " <<sum(10) <<endl;

    return 0;
}
