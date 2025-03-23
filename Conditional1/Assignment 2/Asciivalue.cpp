//Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include<iostream>
using namespace std;
int main(){
    char ch;
   cout<<"Enter any character:";
    cin>>ch;
    int a= int(ch);
    cout<<a;
    if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127)){
        cout<<" Speacial character";
    }
    else if(a>=48 && a<=57){
        cout<<"Digit";
    }
    else{
        cout<<" Alphabet";
    }
    return 0;
}