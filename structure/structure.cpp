#include<iostream>
using namespace std;

// Create a structure variable called myStructure
struct{
    string name;
    int age;
}myStructure;

//structure-2: One Structure in Multiple Variables
struct {
    string name;
    int age;
    string designation;
}employee1,employee2,employee3;

int main(){

    cout<<"Structure example-1:" <<endl;
    // Assign values to members of myStructure
    myStructure.name="Najmul Islam";
    myStructure.age=20;

    // Print members of myStructure
    cout<<"Name:" <<myStructure.name <<endl;
    cout<<"Age:" <<myStructure.age <<endl;


    //------------------- structure 2 ----------------------

    cout<<endl;
    cout<<"-----------------------------Structure example-2-----------------------------------" <<endl;
    // Put data into the first structure
    employee1.name="Kamrul Hasan";
    employee1.age=29;
    employee1.designation="Software Engineer";

    // Put data into the second structure
    employee2.name="Jamal";
    employee2.age=25;
    employee2.designation="IT Executive";

    // Put data into the third structure
    employee3.name="Arif Hossain";
    employee3.age=27;
    employee3.designation="Graphic Designer";

    //print
    cout<<"Employee List:" <<endl;
    cout<<"Name: " <<employee1.name <<endl;
    cout<<"Age: " <<employee1.age <<endl;
    cout<<"Designation: " <<employee1.designation <<endl;

    cout<<endl;
    cout<<"Name: " <<employee2.name <<endl;
    cout<<"Age: " <<employee2.age <<endl;
    cout<<"Designation: " <<employee2.designation <<endl;

    cout<<endl;
    cout<<"Name: " <<employee3.name <<endl;
    cout<<"Age: " <<employee3.age <<endl;
    cout<<"Designation: " <<employee3.designation <<endl;

    return 0;
}
