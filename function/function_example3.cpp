#include<iostream>
using namespace std;

// Multiple Parameters function
void employeeInfo(string name, int age, string designation){
    cout<<"Name: " <<name <<endl;
    cout<<"Age: " <<age <<endl;
    cout<<"Designation: " <<designation <<endl;
    return;
}

// pass array as function parameter
int sum(int myArr[5]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=myArr[i];
    }
    return sum;
}
int main(){

    // function call
    cout<<"Employee Information"<<endl;
    employeeInfo("Jhon",28,"Software Engineer");
    cout<<endl;
    employeeInfo("Abrahim",25,"Web Designer");
    cout<<endl;
    employeeInfo("Smith",32,"Project Manager");

    // array declaration
    int myArr[5]={10,11,12,13,14};
    int totalSum=sum(myArr);
    cout<<endl;
    cout<<"The sum is:" <<totalSum <<endl;

    return 0;
}
