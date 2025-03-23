//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line
#include<iostream>
using namespace std;
int main(){
   int x1,y1,x2,y2,x3,y3;
   float m1,m2;
    cout<<"Enter First co-ordiante:";
    cin>>x1;
    cin>>y1;
    cout<<"Enter Second co-ordiante:";
    cin>>x2;
    cin>>y2;
    cout<<"Enter Third co-ordiante:";
    cin>>x3;
    cin>>y3;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    cout<<m1<<" "<<m2;

    if(m1==m2){
        cout<<" co-linear";
    }
    else{
        cout<<" Non linear";
    }
    return 0;
}