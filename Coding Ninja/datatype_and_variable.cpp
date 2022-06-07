#include<iostream>
using namespace std;

// int 4 bytes
//char 1 bytes
//float 4 bytes
// double 8 bytes
// bool  1 byte

int main(){
       
       int a = 10 ;
       int b = 15;
       int c = a+b;

       cout<<c<<endl;

       bool d = true;
       int size = sizeof(d);
       cout<< size <<endl;

       
       return 0;
}