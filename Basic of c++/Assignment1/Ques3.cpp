//Take two numbers as input and perform addition, subtraction, multiplication, and division. Display the results. 
#include<iostream>
using namespace std;
int main (){
    int a,b,c,d,e,f;
    cout<<"Enter First Number:";
    cin>>a;
    cout<<"Enter Second Number:";
    cin>>b;
    c=a-b;
    d=a+b;
    e=a/b;
    f=a*b;
    cout<<"sub is:"<<c<<endl;
    cout<<"add is:"<<d<<endl;
    cout<<"div is:"<<e<<endl;
    cout<<"mul is:"<<f;
}