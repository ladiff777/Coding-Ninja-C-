#include<iostream>
#include<climits>
using namespace std;

int main(){
       
    int n;
    cin >>n;

    int input[100]; // we always take array as constant not same as variable
    /*int i = 0;
    while(i<n){
        cin>>input[i];
        i++;
    } */

    for(int i =0; i<n ;i++)
    {
        cin>>input[i];
    }
    
    // printing array
    
    for(int i = 0; i<n ;i++){
        cout<< input[i] <<endl;
    }

    // largest number in array
    //int max = input[0];  problem if ararry in empty
    //int max = 0; problem with negative numbers
    int max = INT_MIN;

    for(int i = 1;i<n;i++){
        if (input[i] > max){
            max = input[i];
        }
        
        
    }
    cout<<"Largest value of array is :"<< max<<endl;

    //sum of array

    
}