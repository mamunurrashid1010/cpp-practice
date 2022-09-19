/*
    C++
    Multilevel Inheritance:
    A class can also be derived from one class, which is already derived from another class.
    Example: MyGrandChild is derived from class MyChild (which is derived from MyClass).
*/
#include<iostream>
using namespace std;

// base/parent class
class Parents{
    public:
    void parentMessage(){
        cout<<"I'm from parent class" <<endl;
        return;
    }
};

// derived/child class
class Child: public Parents{
    public:
    void childMessage(){
        cout<<"I'm from child class" <<endl;
        return;
    }
};

// derived/child class
class GrandChild: public Child{
    public:
    void GrandChildMessage(){
        cout<<"I'm from grand child class" <<endl;
        return;
    }
};

int main(){
    cout<<"Multilevel Inheritance Example:" <<endl;
    // Object create
    GrandChild obj;
    obj.GrandChildMessage();
    obj.childMessage();
    obj.parentMessage();

    return 0;
}
