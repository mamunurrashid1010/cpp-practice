/*
    C++ Exceptions
*/
#include<iostream>
using namespace std;

int main(){

    try{
        int value=10;
        if(value<20){
            throw (value);
        }
    }
    catch(int value){
        cout<<"Value less than 20" <<endl;
        cout<<"Value is:" <<value <<endl;
    }

    return 0;
}
