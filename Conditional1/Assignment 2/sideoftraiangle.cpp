//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a:";
    cin>>b;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;
    if((a==b)&&(b==c)){
        cout<<"Equilateral traiangle";
    }
    else if((a!=b)&&(b!=c)&&(c!=a)){
        cout<<"Scalence Traiangle";
    }
    else{
        cout<<"Its a isosceles traingle";
    }
    return 0;
}
