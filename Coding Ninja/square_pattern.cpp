// #include<iostream>
// using namespace std;

// int main(){
//        int n;
//        cin>>n;
//        int i =1;
//        while(i<=n){
//            int j =1;
//            while(j<=n){
//                cout<<j;
//                j++;
//            }
//            cout<<endl;
//            i++;

//        }
//        return 0;
// }


// print i for this 
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

//print j for this
// 1234
// 1234
// 1234
// 1234


#include<iostream>
using namespace std;

int main(){
       int n;
       cin>>n;
       int i =1;
       while(i<=n){
           int j = 0;
           while(j<n){ //j<=n
               cout<<n-j; // n-j+1
               j++;
           }
           cout<<endl;
           i++;
       }
       return 0;
}
 
// output for n = 4
// 4321
// 4321
// 4321
// 4321
