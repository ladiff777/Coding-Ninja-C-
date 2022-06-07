#include<iostream>
#include<math.h>
using namespace std;

int main(){
       int a,b;
       
       cin>>a>>b;
    //    cin>>a>>b;
    //    double result = pow(a,b);
    //    cout<<result<<endl;

    int ans =1;
    int i = 1;
    while(i<=b){

        ans = ans * a;
        //a = a+1;
        i = i+1;
    }
    cout<<ans<<endl;
    //a=a+1;

       return 0;
}