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

        //print array using loop example-1
        cout<<"Print array using loop example-1" <<endl;
        for(int i=0;i<4;i++){
            cout<<"index " <<i <<"=" <<cars[i] <<endl;
        }

        //print array using loop example-2
        cout<<"Print array using loop example-2" <<endl;
        for(int i=0;i<5;i++){
            cout<<"index " <<i <<"=" <<arr[i] <<endl;
        }
        cout<<endl;

        //calculate integer array size(length)
        int value[5]={11,12,13,14,15};
        int length=sizeof(value)/sizeof(int);
        cout<<"value array length: " <<length <<endl;

        //sting length calculate without using build-in function
        string Str="abcdefgh";
        int strLen=0;
        for(int i=0;i<Str[i]!=NULL;i++){
            strLen++;
        }
        cout<<"string length: " <<strLen <<endl;

        //sting length calculate using build-in length() function
        string Str1="asdf";
        int len=Str1.length();
        cout<<"string-1 length: " <<len <<endl;



    return 0;
}
