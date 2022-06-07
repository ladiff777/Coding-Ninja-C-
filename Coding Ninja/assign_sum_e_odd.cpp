#include<iostream>
using namespace std;

int main(){

       
       int n;
       int r;
       cin>>n;
       int sum =0;
       int sum1 = 0;
       while (n>0){
              r = n % 10;
              n = n / 10;

              if (r%2 == 0){
                     sum = sum +r;
              }
              else if(r%2 != 0){
                     sum1 = sum1+r;    
              }

       }
       cout<<sum<<endl;
       cout<<sum1<<endl;
       
       return 0;
}