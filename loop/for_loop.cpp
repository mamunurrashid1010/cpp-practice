#include<iostream>
using namespace std;

int main(){

    //example-1
    cout<<"Print 1 to 10:" <<endl;
    for(int i=1;i<=10;i++){
        cout<<i <<endl;
    }
    cout<<endl;

    //example-2
    cout<<"Print odd number from 1 to 10:" <<endl;
    for(int i=1;i<=10;i+=2){
        cout<<i <<endl;
    }

    //example-3
    cout<<"Print Even number from 1 to 10:" <<endl;
    for(int i=2;i<=10;i+=2){
        cout<<i <<endl;
    }

    //example-4
    cout<<"Print Pettern :" <<endl;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //example-5
    cout<<"Print pattern square :" <<endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
