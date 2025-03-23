//Write a program to find the euclidean distance between two coordinates.Take both he coordinates from the user as input
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1,y1,y2,x2,dist;
    cout<<"enter x1:";
    cin>>x1;
    cout<<"enter x2:";
    cin>>x2;
    cout<<"enter y1:";
    cin>>y1;
    cout<<"enter y2:";
    cin>>y2;
    dist=sqrt(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    cout<<"Distance is :"<<dist;
    return 0;
}