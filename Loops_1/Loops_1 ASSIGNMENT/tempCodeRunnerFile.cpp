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
   cout<<"The sum of first"<<n<<" term is"<<sum;
    /*int sum =(n*(n+1))/2;  //FORMULA METHOD 
    cout<<sum<<endl;*/
    return 0;
}