// #include<iostream>
// using namespace std;

// int main(){
//        int n;
//        cin>>n;
//        int i =1;
//        while(i<=n){

//            int space =1;
//            while(space<=n-i){
//                cout<<' ';
//                space = space+1;
//            }
//            int j =1;
//            while(j<=i){
//                cout<<j;
//                j++;
//            }
//            int k =i-1;
//            while(k>=1){
//                cout<<k;
//                k =k-1;
//            }
//            cout<<endl;
//            i++;
//        }
//        return 0;
// }

//output
// 4
//    1
//   121
//  12321
// 1234321

// #include<iostream>
// using namespace std;

// int main(){
//        int n;
//        cin>>n;
//        int i =1;
//        while(i<=n){

//            int space =1;
//            while(space<=n-i){
//                cout<<' ';
//                space = space+1;
//            }
//            int star =1;
//            while(star<=i){
//                cout<<"*";
//                star= star+1;
//            }
//            int star1 =i-1;
//            while(star1>=1){
//                cout<<"*";
//                star1 = star1-1;
//            }
//            cout<<endl;
//            i++;
//        }
//        return 0;
// }

//output
// 4
//    *
//   ***
//  *****
// *******


//triangle of numbers

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
               p= p+1;
           }
           int k =i-1;
           int f = k*2;
           while(k>=1){
               cout<<f;
               f =f-1;
               k =k-1;
           }
           cout<<endl;
           i++;
       }
       return 0;
}



// output

// 4
//    1
//   232
//  34543
// 4567654



