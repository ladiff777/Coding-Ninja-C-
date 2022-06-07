#include<iostream>
using namespace std;

int main(){
       int n,n3;
       cin >>n;
       int n1 =1;
       int n2 = 1;

       for(int i =2;i<n;i++){
          n3 = n1+n2;
         
          n1 = n2;
          n2 = n3;


          
       }
       cout<<n3;

       return 0;
}