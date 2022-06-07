// #include<iostream>
// using namespace std;



// void demo(int a, int b){
//     cout << a << " " << b;
// }

// int main() {
//     int a = 5;
//     int b = 15; 
//     demo(a);
// }

// #include<iostream>
// using namespace std;


// void printTable(int start, int end, int step) {
//     /* Don't write main().
//      * Don't read input, it is passed as function argument.
//      * Print output and don't return it.
//      * Taking input is handled automatically.
//      */
    
//     while(start<=end){
//     int c= (start-32)*(5.0)/9;
//     cout<<start<< "\t"<<c<<endl;
//     start=start+step;
        

//     }
//              //int start,end,step;
//             printTable(start,end,step);
    
// }




    //int start,end,step;
    //cin>>start>>end>>step;

    

//     #include <iostream>
// using namespace std;
// void func(int a) {
//     int b = a;
//     b = b + 10;
// }

// int main() {
//     int a = 10;
//     func(a);
//     cout << b << endl;
// }

#include <iostream>
using namespace std;

// void func(int a) {
//     int b = 10;
//     a = b + 10;
//     cout << a << " ";
// }

// int main() {
//     int a = 10;
//     func(a);
//     cout << a << " ";
// }

// void doubleValue(int a) {
//     a = a * 2;
// }
// int main() {
//     int a = 8;
//     doubleValue(a);
//     cout << a;
// }


// int func(int a){
//     a += 10;
//     return a;
// }

// int main() {
//     int a = 5;
//     func(a);
//     cout << a;
// }


int square(int a){
    int ans = a * a;
    return ans;
}

int main() {
    int a = 4;
    a = square(a);
    cout << a;
}


