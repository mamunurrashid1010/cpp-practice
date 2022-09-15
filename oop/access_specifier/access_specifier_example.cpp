#include<iostream>
using namespace std;

// create class
class myClass{

// Access specifier
public:
    int a=10;
    string str;

// Access specifier
private:
    int b=50;
    string str1;


};
int main(){

    cout<<"Access specifier example:" <<endl;

    // create object of myCLass
    myClass obj;

    // Allowed (public)
    obj.a=20;
    obj.str="Demo string";
    cout<<obj.a <<endl;
    cout<<obj.str <<endl;

    // Not allowed (private)
    obj.b=20;
    cout<<obj.b <<endl;

    return 0;
}
