// Write a program that will tell the number of dogs and chicken are there when the user will provide the value of total heads and legs. 
//For example:  
//Input: heads -> 4 legs -> 12 
//Output: dogs -> 2 chicken -> 2
#include<iostream>
using namespace std;
int main(){
    int leg,head,c,d;
    cout<<"Enter Leg:";
    cin>>leg;
    cout<<"Enter head:";
    cin>>head;
    c=(2*head-0.5*leg);
    d=4-c;
    cout<<c<<"  "<<d;
    return 0;
} 