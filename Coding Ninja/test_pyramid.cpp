#include<iostream>
using namespace std;

int main(){
       int n;
       cin>>n;
       int i =1;
       //int val = 1;
       while(i<=n){

           int space =1;
           while(space<=n-i){
               cout<<' ';
               space = space+1;
           }
           int j =1;
           int p =i;
           while(j<=i){
               cout<<p;

               j = j+1;
               p= p-1;
           }
           int k =i-1;
           int f = 2;
           while(k>=1){
               
               cout<<f;
               f =f+1;
               k =k-1;
           }
           cout<<endl;
           i++;
       }
       return 0;
}