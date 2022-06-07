#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n, int x){
 int count = -1;
 int i = 0;
 while(i<n){
     count++;
     if(arr[i] == x){
         break;
     }
     i++;
     
 }
 cout<<count<<endl;
 return count;
 
 }
int main(){
    int t;
    cin >>t;
    while(t--){
        
        int x;
        
        int n;
        cin>>n;
        int arr[100];

        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        cin>>x;
        linearSearch(arr,n,x);

    }
       
       
}