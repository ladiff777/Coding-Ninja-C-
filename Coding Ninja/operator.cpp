#include<iostream>
using namespace std;

int main(){
       int f;
       cout << "Enter Fah Value" <<endl;
       cin >> f;
       float c = (5.0/9) * (f-32);
       cout<< "Your celcious Value is: " << c <<endl;

       int a;
       int b;
       cout <<"Enter a and b"<< endl;
       cin >> a>>b;
       
       bool isEqual = (a==b);
       bool isGreater = (a > b);
       bool isALess = (a < b);

       cout << "are they Equal "<< isEqual <<endl;
       cout << "is a greater " << isGreater <<endl;
       cout <<"is a less " << isALess <<endl;

       bool third = isEqual && isGreater;
       bool fourth = isEqual || isGreater;

       cout <<" Not equal " << !isEqual <<endl;
       cout <<third<<endl;
       cout <<fourth<<endl;

       return 0;
}