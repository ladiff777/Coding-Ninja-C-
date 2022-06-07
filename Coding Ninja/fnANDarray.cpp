#include<iostream>
using namespace std;


       
       void printArray(int input[] , int n){
           
           cout<< "Print : " <<endl;
           for(int i =0; i < n; i++){
               cout<<input[i] << " ";

           }
           cout << endl;
       }

       int main(){
           int n ;
           cout<< "Enter n : ";
           cin >> n;
           
           int input[100];
           cout<<"Enter array elements : ";
           //cout<<input<<endl;  this will print address of the first element or starting element
           for( int i =0; i <n;i++){
               cin>>input[i];
           }

           printArray(input,n);

       }
