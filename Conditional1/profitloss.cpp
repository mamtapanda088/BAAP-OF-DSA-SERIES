#include<iostream>
using namespace std;
int main (){
    int cp,sp;
    cout<<"Enter cost price:";
    cin>>cp;
    cout<<"Enter selling price:";
    cin>>sp;
    if(cp>sp){
        cout<<"Its a loss"<<cp-sp;
    }
    else{
        cout<<"Its a profit:"<<sp-cp;
    }
    return 0;
}