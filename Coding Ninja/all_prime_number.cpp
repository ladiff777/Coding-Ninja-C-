// #include<iostream>
// using namespace std;

// int main(){
//        int n;
//        cin >> n;
//        int n1 = 2;
//        int i ;

//        bool divided = false;

//        for (int d =2;d<=n;d++){
//            for( i = 2; i<=d/2;i++){
//                if(d % i == 0){
//                    i = d;
//                    break;


//                }
//            }
//            if (i != d){
//                cout << d<<endl;
//            }
//        }

       
       
    


//        return 0;
// }

#include <iostream>
using namespace std;

int main(){

    int n, nextNum = 2;
    
    cin >> n;
    
    while(nextNum <= n)
    {
        bool divided = false;
        int div = 2;
        
        for(; div<nextNum; div++)
        {
            if(nextNum%div==0)
            {
                divided=true;
                break;
            }

        }
        
        if(divided==false)
        {
            cout << nextNum << endl;
        }
        
        nextNum++;
    }
    
}