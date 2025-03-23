//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int l,b,area,peri;
    cout<<"Enter the length :";
    cin>>l;
    cout<<"Enter the breadth:";
    cin>>b;
    area=l*b;
    peri=2*(l+b);
    if(area>peri){
        cout<<"Area is greathan its perimeter";
    }
    else if(area<peri){
        cout<<"Perimeter is greater than area";
    }
    else{
        cout<<"Both are equal";
    }
return 0;
} 