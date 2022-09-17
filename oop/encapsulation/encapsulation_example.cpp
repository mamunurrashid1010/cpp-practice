/*
    C++ Encapsulation
    Encapsulation, is to make sure that "sensitive" data is hidden from users.
*/
#include<iostream>
using namespace std;

//class create
class employee{
private:
    //private attribute
    int totalSalary;

public:
    //set
    void setTotalSalary(int s){
        totalSalary=s;
    }

    //get
    int getTotalSalary(){
        return totalSalary;
    }
};

int main(){
    cout<<"Encapsulation Example:" <<endl;
    // employee class object create
    employee obj;
    obj.setTotalSalary(20000);
    cout<<"Employee total salary: " <<obj.getTotalSalary() <<endl;

    return 0;
}
