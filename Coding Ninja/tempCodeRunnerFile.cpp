#include<iostream>
using namespace std;

int main(){
       int n;
       cin >> n;
       int n1 = 2;
       int i ;

       

       for (int d =2;d<n;d++){
           for( i = 2; i<d/2;i++){
               if(d % i == 0){
                   i = d;
                   break;


               }
           }
           if (i != d){
               cout << d<<endl;
           }
       }

       
       
    


       return 0;
}