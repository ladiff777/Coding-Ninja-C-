#include<iostream>
using namespace std;

int main(){
       int n ,c;
       int sum = 0;
       int pro = 1;

       cin>>n;
       cin>>c;

       if (c ==1){
           int i =1;
           while(i<=n){
               sum = sum +i;
               i++;
           }
           cout<<sum;

       }
       else if(c == 2){
           int j =1;
           while(j<=n){
               pro = pro *j;
               j++;
           }
           cout<<pro;
       }else{
           cout<<"-1";
       }
       
}