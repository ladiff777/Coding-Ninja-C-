#include<iostream>
using namespace std;

int main(){
       int n;
       cin>>n;
       int i =1;;
       while(i<=n){
           
           int j =1;

           while(j<=n-i+1){
               cout<<j;
               j++;
           }
           //if (i ==2){
           int k = 1;
           while(k<=2 *(i-1)){
               cout<<"*";
               k++;
           }
           //}
           int t = 1;
           int f = n-i+1;
           int p =n;
           while(t<= f){
               cout<<p-i+1;
               p--;
               t++;
           }
           cout<<endl;
           i++;
       }
       return 0;
}