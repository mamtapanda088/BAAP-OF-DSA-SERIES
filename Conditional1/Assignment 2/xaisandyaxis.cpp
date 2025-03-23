//Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 
#include<iostream>
using namespace std;
int main(){
   int x,y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    if((x==0) && (y==0)){
        cout<<" At origin";
    }
    else if((x!=0) && (y==0)){
        cout<<" At x axis";
    }
    else if((y!=0) && (x==0)){
        cout<<" At Y axis";
    }
    else{
        cout<<" lies at plain";
    }
    return 0;
}
