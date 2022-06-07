#include<iostream>
using namespace std;

int main(){
       int n;
       cin>>n;
       int i =1;
       while(i<=n/2+1){
           //int i1 = 1;
           int n1= (n+1)/2;
           while(i<=n1){
               int space = 1;
               while(space<=n1-i){
                   cout<<" ";
                   space = space+1;
               }
               int j= 1;
               while(j<=2*i-1){
                   cout<<"*";
                   j++;
               }
               cout<<endl;
               i++;
               
           }
           int cr=1;
    while(cr<=n/2)
    {
        int s=1;
        while(s<=cr)
        {
            cout<<" ";
            s++;
        }
        int cc=2*((n/2)-cr+1)-1;
        while(cc>=1)
        {
            cout<< "*";
            cc--;
        }
        cout<<endl;
        cr++;
    }
       
           i++;
           
       }
       return 0;
}