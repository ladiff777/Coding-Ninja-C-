/*#include<iostream>
using namespace std;

int main(){
       int n;
       cout << "Enter n"<< endl;
       cin>>n;


       int i = 1;
       while (i <= n){
           int j = 1;
           while (j <= i){
               cout << j;
               j = j +1;
           }
           cout << endl;
           i = i +1;
       }
       return 0;
} */



/*#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
/*    int n;
    cin >>n;
    int i =1 ;
    int val = 1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<val;
            j=j+1;
            val = val+1;
        }
        cout<<endl;
        i = i+1;
    }
  
}*/
/*
output-
1
23
456
78910*/
#include<iostream>
using namespace std;


int main(){
    
    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        int k=1;
        while(k<=n-1){
            cout<<" ";
            k=k+1;    
        }
        int j= 1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        int d=1;
        while(d<=n-1){
            cout<<" ";
            d=d+1;
        }
        cout<<endl;
        i = i+1;
    }
  
}

