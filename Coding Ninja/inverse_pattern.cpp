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
//            int star = 1;
//            while(star <= i ){
//                cout<< '*';
//                star = star +1;
//            }
//            cout<<endl;
//            i= i+1;
//        }
//        return 0;
// }

// out put 
// 5
//     *
//    **
//   ***
//  ****
// *****

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
//            int j = 1;
//            while(j <= i ){
//                cout<< j;
//                j = j +1;
//            }
//            cout<<endl;
//            i= i+1;
//        }
//        return 0;
// }

// 4
//    1
//   12
//  123
// 1234


#include<iostream>
using namespace std;

int main(){
       int n;
       cin>>n;
       int i =1;;
       while(i<=n){
           int j =1;

           while(j<=n-i+1){
               cout<<n-i+1;
               j++;
           }
           cout<<endl;
           i++;
       }
       return 0;
}


//output
// 4
// 4444
// 333
// 22
// 1