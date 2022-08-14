/*
    C++
    Math
    c++ have many function to perform different mathematical operation
    functions: max(),min(),pow(),sqrt(),round(),log(),abs() etc.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    //max and min
    int v1,v2;
    cout<<"Enter 2 value for calculate max and min:";
    cin>>v1;
    cin>>v2;
    cout<<"Max is: " <<max(v1,v2) <<endl;
    cout<<"Min is: " <<min(v1,v2) <<endl;

    //sqrt
    cout << sqrt(64);
    cout<<endl;

    //round
    cout << round(5.2);
    cout<<endl;

    //abs(), Returns the absolute value of x
    cout << abs(-3.2);
    cout<<endl;

    //cbrt(), Returns the cube root of x
    cout << cbrt(9);
    cout<<endl;

    return 0;

}



