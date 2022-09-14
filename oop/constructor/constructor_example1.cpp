#include<iostream>
using namespace std;

// class with constructor
class organization{
public:
    string name;
    string owner;
    // create constructor
    organization(string orgName, string ownerName){
        name=orgName;
        owner=ownerName;
    }

};

int main(){

    cout<<"Constructor Example-1:" <<endl;

    // create object of organization class
    organization orgObj1("Xponent IT","Hashem reza");
    organization orgObj2("Desh Ltd","Jhon Doe");
    // print value
    cout<<"Organization: " <<orgObj1.name <<" Owner: " <<orgObj1.owner <<endl;
    cout<<"Organization: " <<orgObj2.name <<" Owner: " <<orgObj2.owner <<endl;

    return 0;
}
