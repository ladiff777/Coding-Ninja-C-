#include<iostream>
#include<math.h>
using namespace std;

int main(){
       int  n ;
       int a;
       double ans = 0;
       cin >> n;
       int i = 0;

       while(n != 0){
           a = n % 2;
           ans = ans + a * pow(10,i);

           n = n/2;
           i++;

       }

       cout<<ans<<endl;
    
       
       return 0;
}