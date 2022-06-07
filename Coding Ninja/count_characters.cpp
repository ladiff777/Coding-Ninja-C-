#include<iostream>
using namespace std;

int main(){
       char c;
       int intCount = 0;
       int alfaCount = 0;
       int spaceCount = 0;

       while(c != '$')
       {
           c = cin.get();
           if( c >= 'a' && c <= 'z'){
              alfaCount++;
           }
           else if( c>='0' && c<= '9'){
               intCount++;
           }
           else if( c == ' '){
               spaceCount++;
           }
           else if( c == '\n'){
               spaceCount++;
           }
           else if( c == '\t'){
               spaceCount++;
           }
       }

       cout<<alfaCount<<" "<<intCount<<" "<<spaceCount<<endl;
       return 0;
}