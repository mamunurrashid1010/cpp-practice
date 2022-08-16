#include<iostream>
using namespace std;

int main(){
    int x=20;
    int y=10;

    //if condition
    if(x>y){
        cout<<x <<" is greater than " <<y <<endl;
    }

    if(x%2==0){
        cout<<"The number is even." <<endl;
    }

    //if-else condition
    int value1,value2;
    cout<<"Enter value-1:";
    cin>>value1;
    cout<<"Enter value-2:";
    cin>>value2;

    if(value1>value2){
        cout<<value1 <<" greater than " <<value2 <<endl;
    }
    else{
        cout<<value1 <<" less than " <<value2 <<endl;
    }

    //else-if condition
    int marks=78;
    if(marks<50){
        cout<<"Fail" <<endl;
    }
    else if(marks>=50 && marks<80){
        cout<<"Good" <<endl;
    }
    else if(marks>=80 && marks<100){
        cout<<"Excellent" <<endl;
    }
    else{
        cout<<"Please enter a valid mark" <<endl;
    }

    //short hand if-else statement (ternary operator)
    /*
    There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.
    It can be used to replace multiple lines of code with a single line.
    It is often used to replace simple if else statements
    syntax:
    variable = (condition) ? expressionTrue : expressionFalse;
    */
    int value3=-10;
    (value3>0) ? cout<<"value is positive" : cout<<"value is negative";

    return 0;
}

