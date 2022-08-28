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
    Students student1,student2;

    // assign value
    student1.name="Rezaoul Karim";
    student1.classInfo=6;

    student2.name="Rana";
    student2.classInfo=7;

    //print
    cout<<"Name:" <<student1.name <<endl;
    cout<<"Class:" <<student1.classInfo <<endl;
    cout<<endl;
    cout<<"Name:" <<student2.name <<endl;
    cout<<"Class:" <<student2.classInfo <<endl;

    return 0;
}
