#include<iostream>
using namespace std;

// class create
class myClass{
public:
    int data;
    myClass(int a){
        data=a;
    }

};

int main(){

    //object create
    myClass obj(500);
    cout<<"Data:" <<obj.data <<endl;

    return 0;
}
