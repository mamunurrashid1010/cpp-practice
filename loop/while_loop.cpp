#include<iostream>
using namespace std;

int main(){
    cout<<"While loop example:" <<endl;

    //example-1
    while(true){
        cout<<"Condition is true" <<endl;
        //if we not use break, this loop executed unlimited time.
        break;
    }

    //example-2
    cout<<"Print 1 to 10:" <<endl;
    int i=1;
    while(i<=10){
        cout<<i <<endl;
        i++;
    }
    cout<<endl;


    /*
        do/while loop
        The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested
    */
    cout<<"do/while loop example:" <<endl;
    int a=0;
    do{
        cout<<a;
        a++;
    }
    while(a>1);

    return 0;
}
