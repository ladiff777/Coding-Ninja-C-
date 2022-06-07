#include<iostream>
using namespace std;

int main(){
       int n;
       cin>>n;
       int count = 0;
       int i =1;
       while(count<n){
           int ap = 3*i +2;
           if (ap % 4 != 0){
               cout<<ap<<" ";
               count++;
           }
           
           i++;
       }

       return 0;
}