//Q1

// #include<iostream>
// using namespace std;

// int main(){
//        int n;
//        cin>>n;
//        int i =1;
//        while(i<=n){
//            int j =1;
//            while(j<=i){
//                cout<<"*";
//                j++;

//            }
//            cout<<endl;
//            i++;
//        }
//        return 0;
// }



//Q2

// #include<iostream>
// using namespace std;

// int main(){
//        int n;
//        cin>>n;
//        int i =1;
//        while(i<=n){
//            int j =1;
//            while(j<=i){
//                cout<<i;
//                j++;

//            }
//            cout<<endl;
//            i++;
//        }
//        return 0;
// }


//Q3

#include<iostream>
using namespace std;

int main(){
       int n;
       cin>>n;
       int i =1;
       while(i<=n){
           int j =1;
           while(j<=i){
               cout<<i-j+1;
               j++;

           }
           cout<<endl;
           i++;
       }
       return 0;
}