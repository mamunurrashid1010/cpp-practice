/*
    C++ named structure
*/

#include<iostream>
using namespace std;

// declare named structure
struct Students{
    string name;
    int classInfo;
};

int main(){

    cout<<"Named Structure Example-1:" <<endl;

    // declare variable to use students structure
    Students student;

    // assign value
    student.name="Rezaoul Karim";
    student.classInfo=6;

    student.name="Rana";
    student.classInfo=7;

    //print
    cout<<"Name:" <<student.name <<endl;
    cout<<"Class:" <<student.classInfo <<endl;
    cout<<endl;
    cout<<"Name:" <<student.name <<endl;
    cout<<"Class:" <<student.classInfo <<endl;

    return 0;
}
