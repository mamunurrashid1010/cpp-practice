#include<iostream>
using namespace std;

int main(){

    int value1=10, value2=20;

    //logical and (&&) operator
    if(value1>0 && value1<value2 ){
        cout<<"value1 is less then value2" <<endl;
    }

    //logical or
    if(value1>0 || value1<value2 ){
        cout<<"value1 0 to " <<value2 <<endl;
    }

    //logical not
    int a=5, b=5;
    if(a != b){
        cout<<"allow" <<endl;
    }
    else{
        cout<<"not allow" <<endl;
    }

    return 0;
}
