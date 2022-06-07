#include<iostream>
using namespace std;

int main(){
       int n;
       cin >>n;
       int i =1;
       
       
       int count  = 0;
       while(i * i <= n){

            count++;
           
           i++;
           
       }

       cout<<count;
       return 0;
}