/*
    C++ Inheritance
*/
#include<iostream>
using namespace std;

// base class
class students{
public:
    void six(){
        cout<<"Class six student list:" <<endl;
        cout<<"1.Kamal 2.Hasan 3.Jamal 4.Noman 5.Fahim" <<endl;
        return;
    }
    void seven(){
        cout<<"Class seven student list:"<<endl;
        cout<<"1.Towhid 2.Belal 3.Adnana 4.hasan 5.Arif" <<endl;
        return;
    }
};

// derived class
class exam: public students{
public:
    string center;
    string address;
};

int main(){

    // object create
    exam examObj;
    examObj.center="Test center";
    cout<<"Exam center:" <<examObj.center <<endl;
    examObj.six();
    cout<<endl;
    examObj.seven();
    return 0;
}
