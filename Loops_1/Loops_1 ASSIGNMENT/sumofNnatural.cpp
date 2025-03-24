//Write a C++ program to take an integer n as input and print the sum of the first n natural numbers using a loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int sum=0;
   for(int i=1;i<=n;i++){
    sum =sum+i;
   }
   cout<<"The sum of first"<<n<<" term is:"<<sum;
    /*int sum =(n*(n+1))/2;  //FORMULA METHOD 
    cout<<sum<<endl;*/
    return 0;
}