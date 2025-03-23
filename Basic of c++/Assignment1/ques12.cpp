// Given 2 fractions, find the sum of those 2 fractions.Take the numerator and denominator values of the fractions from the user
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1,y1,y2,x2,sum;
    cout<<"enter x1:";
    cin>>x1;
    cout<<"enter x2:";
    cin>>x2;
    cout<<"enter y1:";
    cin>>y1;
    cout<<"enter y2:";
    cin>>y2;
    sum=((x1*y2) + (x2*y1))/(y2*x2);
    cout<<"sum is :"<<sum;
    return 0;
}