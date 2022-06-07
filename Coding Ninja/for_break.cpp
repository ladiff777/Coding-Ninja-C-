#include<iostream>
using namespace std;

int main(){
       int n;
       cin>>n;

       bool divided = false;

       for(int d = 2; d < n; d++){
           if ( n % d == 0){
               divided = true;
               break;
           }
       }
       if (divided = true){
           cout<<"Prime"<<endl;
       }
       else{
           cout<<"Not Prime"<<endl;
       }
       return 0;
}