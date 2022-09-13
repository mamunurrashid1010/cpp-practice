#include<iostream>
using namespace std;

// create class
class myClass{
public:
    // Method/function defined inside the class
    void testFunction(){
        cout<<"I'm from testFunction."<<endl;
        return;
    }

    // Method/function declaration
    void testFunction2();

    // Method/function with parameter
    void testFunction3(string message){
        cout<<"I'm from testFunction3 :" <<message <<endl;
        return;
    }
};

// Method/function definition outside the class
void myClass::testFunction2(){
    cout<<"I'm from testFunction2."<<endl;
    return;
}

int main(){

    cout<<"Method/Function practice example:"<<endl;

    // create an object of class
    myClass obj;
    // call the testFunction
    obj.testFunction();
    // call the testFunction2
    obj.testFunction2();
    // call the testFunction3
    obj.testFunction3("hello world");

    return 0;
}
