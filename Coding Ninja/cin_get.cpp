// #include<iostream>
// using namespace std;

// int main(){
//        char c;
//        //cin>>c; it is not counting space 
//        c = cin.get();
//        int count = 0;
//        while(c != '$'){
//            count++;
//            c = cin.get();
//        }
//        cout<<count<<endl;
//        return 0;
// }

#include<iostream>
using namespace std;

int main(){
       char ch;
       char c1;
       int count = 0;
       int alp = 0,dig = 0,space  =0;
       
       ch = cin.get();
       //x = cin.get();
    
       while(ch != '$'){
           
           ch = cin.get();
           count ++;
        if (isalpha(ch)){
            alp++;
        }
        else if(isdigit(ch)){
            dig++;
        }
        else if(isspace(ch)){
            space++;
        }
       }

       cout<<alp<<" "<<dig<<" "<<space<<" "<<endl;
       


       return 0;
}