#include<iostream>
using namespace std;

int main(){

    //break
    cout<<"Break keyword used in a loop:" <<endl;
    for(int i=1;i<10;i++){
        if(i==5){
            break;
        }
        cout<<i <<endl;
    }

    //continue
    cout<<"Continue keyword used in a loop:" <<endl;
    for(int j=1;j<10;j++){
        if(j==5){
            continue;
        }
        cout<<j <<endl;
    }

    return 0;
}
