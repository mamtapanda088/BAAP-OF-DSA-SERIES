#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    if(a%3==0 && a%5==0){
        cout<<"its divisble by 5 and 3";
    }
    else{
        cout<<"its not divisible by 5 and 3";
    }
}