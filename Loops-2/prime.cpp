#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    bool flag=true;//number is prime
   for(int i=2;i<=n-1;i++){
    if(n%i==0){
        flag=false;
        break;
      }
   }
   if(n==1){
    cout<<"Neither is composite nor prime";
   }
   if(flag==true){
    cout<<"Its a prime number";
   }
   else{
    cout<<"Its a composite number";
   }
    return 0;
}