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

    return 0;
}

