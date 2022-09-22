#include<iostream>
using namespace std;

// base class
class Company{
public:
    void totalEmployee(){
        cout<<"Company Total Employee: 50" <<endl;
    }
};

// derived class
class It: public Company{
public:
    void totalEmployee(){
        cout<<"IT Total Employee: 30" <<endl;
    }
};

// derived class
class hrm: public Company{
public:
    void totalEmployee(){
        cout<<"HRM Total Employee: 20" <<endl;
    }
};

int main(){
    cout<<"Polymorphism Example:" <<endl;

    // create object
    Company companyObj;
    It itObj;
    hrm hrmObj;

    companyObj.totalEmployee();
    itObj.totalEmployee();
    hrmObj.totalEmployee();

    return 0;
}
