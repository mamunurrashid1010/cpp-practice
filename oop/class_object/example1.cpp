/*
    C++
    Classes and Objects
*/
#include<iostream>
using namespace std;

// create class
class students{
public:
    string name;
    int age;
};

// Create a Car class
class Car {
  public:
    string brand;
    string model;
    int year;
};

int main(){
    // Example-1
    // create an object of students
    students myObj;

    // Access attributes and set values
    myObj.name="Smith";
    myObj.age=28;

    // Print attribute values
    cout<<"Student Information:" <<endl;
    cout<<"Name: " <<myObj.name <<endl;
    cout<<"Age: " <<myObj.age <<endl;


    // Example-2
    // Create an object of Car
    Car carObj1;
    carObj1.brand="BMW";
    carObj1.model="A12";
    carObj1.year=2001;

    // Create another object of car
    Car carObj2;
    carObj2.brand="Ford";
    carObj2.model="Mustang";
    carObj2.year=1969;

    // Print
    cout<<endl <<"Car Information:" <<endl;
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";


    return 0;
}
