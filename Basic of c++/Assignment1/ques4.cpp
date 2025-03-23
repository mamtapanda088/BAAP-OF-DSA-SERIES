//Take input of principle, time and rate and find the simple interest 
#include<iostream>
using namespace std;
int main (){
   float p,r,t,si;
   cout<<"Enter principle:" ;
   cin>>p;
   cout<<"Enter rate:" ;
   cin>>r;
   cout<<"Enter Time:" ;
   cin>>t;
   si=(p*r*t)/100;
   cout<<"simple interest is :"<<si;
}
