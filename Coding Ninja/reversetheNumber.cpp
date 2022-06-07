#include<iostream>
using namespace std;

int main(){
       int n;
       int a;
       int rn = 0;
       cin>>n;
       while(n != 0){
           a = n% 10;
           rn = rn *10 +a;
           n = n/10;
       }

       cout<<rn;
       return 0;
}