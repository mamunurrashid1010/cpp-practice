/*
    C++ Multiple Inheritance
*/
#include<iostream>
using namespace std;

// base class
class baseClass1{
public:
    void demo1(){
        cout<<"I'm from baseClass1" <<endl;
        return;
    }
};

// base class 2
class baseClass2{
public:
    void demo2(){
        cout<<"I'm from baseClass2" <<endl;
        return;
    }
};

// derived class
class derivedClass: public baseClass1, public baseClass2{

};

int main(){
    cout<<"Multiple Inheritance Example:" <<endl;

    // derivedClass object create
    derivedClass obj;
    obj.demo1();
    obj.demo2();

    return 0;
}
