/* #include<iostream>
using namespace std;

int main(){
       int n;
       cout<<"Enter n " << endl;
       cin>>n;

       int d = 2;
       bool divided = false;
       while(d<n){
           if(n%d == 0){
               cout<< "Not Prime " << endl;
               divided = true;
           }
           d = d +1;
       }
       if (!divided){
           cout << "Prime " << endl;
       }
       
} */


/*
#include<iostream>
using namespace std;

int main(){
       int n;
       cin >> n;

       int i = 1 ;
       int sum = 0;

        while(i <=n){
            if(i%2 == 0){
               sum+=i;
            
           }i++; 
          
           
        }
cout<<sum<<endl;

return 0;
  
} */


#include<iostream>
using namespace std;

int main(){
       int s,e,w;
       cin>>s>>e>>w;
       while(s<=e){
           int cel=5*(s-32)/9;
           cout<<s<<" "<<cel<<endl;
           s=s+w;
       }
    return 0;
}
