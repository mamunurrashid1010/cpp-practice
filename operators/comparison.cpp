/*
    C++
    Comparison operator
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int value1, value2;

    //get user value
    cout<<"Enter value-1:";
    cin>>value1;
    cout<<"Enter value-2:";
    cin>>value2;
    cout<<endl;

    if(value1==value2)
        cout<<value1 <<" is Equal to " <<value2 <<endl;
    else if(value1>value2)
        cout<<value1 <<" is Greater than " <<value2 <<endl;
    else if(value2>value1)
        cout<<value2 <<" is Greater than " <<value1 <<endl;
    else
        cout<<"Undefined" ;


    return 0;
}
