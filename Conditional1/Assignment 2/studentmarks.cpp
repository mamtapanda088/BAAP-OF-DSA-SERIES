//If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.
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
    if((a<b) && (a<c)){
        cout<<" a has least marks";
    }
    else if((b<a) && (b<c)){
        cout<<" b has least marks";
    }
    else{
        cout<<" c has least marks";
    }
    return 0;
}