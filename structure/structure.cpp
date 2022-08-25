#include<iostream>
using namespace std;

// Create a structure variable called myStructure
struct{
    string name;
    int age;
}myStructure;

int main(){

    cout<<"Structure example-1:" <<endl;
    // Assign values to members of myStructure
    myStructure.name="Najmul Islam";
    myStructure.age=20;

    // Print members of myStructure
    cout<<"Name:" <<myStructure.name <<endl;
    cout<<"Age:" <<myStructure.age <<endl;

    return 0;
}
