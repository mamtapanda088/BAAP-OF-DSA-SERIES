//Write a program to print all the ASCII values and their equivalent
characters of 26 alphabets using a while loop
#include<iostream>
using namespace std;
int main(){
    int i=97;
    while(i<=122)
   {
    cout<<i<<"-"<<char(i)<<endl;
    i++;
   }
   i=65;
   while(i<=90)
  {
   cout<<i<<"-"<<char(i)<<endl;
   i++;
  }
    return 0;
}