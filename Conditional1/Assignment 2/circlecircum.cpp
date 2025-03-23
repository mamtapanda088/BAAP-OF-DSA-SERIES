// Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
 int r;
 cout<<"Enter the radius:";
 cin>>r;
 float area=3.14*r*r;
 float cir=2*3.14*r;
 if(area>cir){
    cout<<"area of circle is greater";
 }
 else if(area<cir){
    cout<<"area of circumference is greater";
 }
 else{
    cout<<"Both are equal ";
 }
 return 0;
}