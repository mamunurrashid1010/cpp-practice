/*
    C++
    Multi Dimensional Array
*/
#include<iostream>
using namespace std;

int main(){

    cout<<"Multi Dimensional Array:" <<endl;

    //declare multi dimensional array example-1
    string strArr[2][3]={
        {"a","b","c"},
        {"d","e","f"}
    };

     //declare multi dimensional array example-2
    string letters[2][2][2] = {
              {
                { "A", "B" },
                { "C", "D" }
              },
              {
                { "E", "F" },
                { "G", "H" }
              }
        };

    //print value example -1
    cout<<"Example-1:" <<endl;
    cout<<"strArr[0][0]=" <<strArr[0][0] <<endl;
    cout<<"strArr[0][1]=" <<strArr[0][1] <<endl;
    cout<<"strArr[0][2]=" <<strArr[0][2] <<endl;
    cout<<"strArr[1][0]=" <<strArr[1][0] <<endl;
    cout<<"strArr[1][1]=" <<strArr[1][1] <<endl;
    cout<<"strArr[1][2]=" <<strArr[1][2] <<endl;
    cout<<endl;

    //print value
    cout<<"Example-2:" <<endl;
    cout<<"letters[0][0][0]=" <<letters[0][0][0] <<endl;
    cout<<"letters[0][0][1]=" <<letters[0][0][1] <<endl;
    cout<<"letters[0][1][0]=" <<letters[0][1][0] <<endl;
    cout<<"letters[0][1][1]=" <<letters[0][1][1] <<endl;

    cout<<"letters[1][0][0]=" <<letters[1][0][0] <<endl;
    cout<<"letters[1][0][1]=" <<letters[1][0][1] <<endl;
    cout<<"letters[1][1][0]=" <<letters[1][1][0] <<endl;
    cout<<"letters[1][1][1]=" <<letters[1][1][1] <<endl;

    return 0;
}
