
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int n;
    //cout<<"enter the value of n "<<endl;
    cin>>n;
    // int bit;
    int sum = 0;
    int a;
    int i =0;
    while (n != 0)
    {
        a = n % 10;
        n /= 10;

        sum = sum +a*pow(2,i);

        i++;
    }
    cout<<sum<<endl;
    return 0;
}