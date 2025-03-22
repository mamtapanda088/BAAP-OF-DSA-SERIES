#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the 3 digit number:";
    cin>>a;
    if(a>=100 && a<=999){
        cout<<"its a three digit number:";
    }
    else{
        cout<<"its not a three digit number";
    }
    return 0;
}