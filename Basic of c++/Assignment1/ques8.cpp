//Explain the difference between x++ and ++x in your own words
#include<iostream>
using namespace std;
int main (){
    //int x;
    //cout<<"Enter the number:";
    //cin>>x;
    //cout<<x++ <<" "<<++x;
    int x=4, y=2, z;
    z= x++ * --y + ++x;
    cout<< x <<" " << y<<" "<<z;
}