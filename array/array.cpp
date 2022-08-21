/*
    C++ Array
*/
#include<iostream>
using namespace std;

int main(){
        //string array declare and value assign
        cout<<"string Array:" <<endl;
        string cars[4]={"BMW","Volvo","Ford","Mazda"};

        //print array value
        cout<<cars[0] <<endl;
        cout<<cars[1] <<endl;
        cout<<cars[2] <<endl;
        cout<<cars[3] <<endl;

        //change value
        cars[0]="HONDA";
        cout<<cars[0]<<endl;

        //integer array
        cout<<"Integer Array:"<<endl;
        int arr[5]={10,20,30,4,5};
        //print
        cout<<arr[0] <<endl;
        cout<<arr[1] <<endl;

        //character array
        cout<<"Character array:" <<endl;
        char ch[4]={'a','b','c','d'};
        //print array value
        cout<<ch[0] <<endl;
        cout<<ch[1] <<endl;
        cout<<ch[2] <<endl;
        cout<<ch[3] <<endl;


    return 0;
}
