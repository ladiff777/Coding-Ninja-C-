// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int ct;
//     cin>>ct;
//     bool isDec = true,is_valid_sequence_yet=true;
//     int i=2;// first term of sequence has already been taken
//     while(i<=n){
//         int nt;
//         cin>>nt;
//         if(is_valid_sequence_yet && isDec && ct>nt){
//             ct=nt;
//             isDec=true;
//         }else if(is_valid_sequence_yet && ct < nt){
//             ct=nt;
//             isDec = false;
//         }else{
//             is_valid_sequence_yet=false;
//         }
//         i++;
//     }
//     if(is_valid_sequence_yet){
//         cout << "true" << endl;
//     }else{
//         cout << "false" <<endl;
//     }
// }

//what i did

#include<iostream>
using namespace std;

int main(){
       int n;
       cin>>n;
       bool isdec = true, valid_yet= true;
       
       int pn;
       cin>>pn;
       int i =2;
       while(i<=n){
           int cn;
           cin>>cn;
           if(pn >cn && isdec && valid_yet )
           {
               pn = cn;
               isdec = true;
           }
           else if(pn<cn &&  valid_yet)
           {
               pn = cn;
               isdec = false;
           }
           else 
           {
            
               valid_yet = false;
           }
           i++;

       }
       if(valid_yet)
       {
           cout<<"true"<<endl;
       }
       else
       {
           cout<<"false"<<endl;
       }
}
       
