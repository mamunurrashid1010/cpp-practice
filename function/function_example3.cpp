#include<iostream>
using namespace std;

// Multiple Parameters function
void employeeInfo(string name, int age, string designation){
    cout<<"Name: " <<name <<endl;
    cout<<"Age: " <<age <<endl;
    cout<<"Designation: " <<designation <<endl;
    return;
}
int main(){

    // function call
    cout<<"Employee Information"<<endl;
    employeeInfo("Jhon",28,"Software Engineer");
    cout<<endl;
    employeeInfo("Abrahim",25,"Web Designer");
    cout<<endl;
    employeeInfo("Smith",32,"Project Manager");

    return 0;
}
