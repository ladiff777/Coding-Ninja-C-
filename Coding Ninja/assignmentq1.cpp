#include<iostream>
#include<math.h>
using namespace std;

int main(){
       int basic;
       
       
       
       char grade;

       double hra = 0.2*basic;
       double da = 0.5*basic;
       double pf = 0.11*basic;
       //char grade = 'B' ;
       //char grade = 'C';
       int allow;

       cin>>basic  >>grade;
       //grade = A,B,C;

       

       // int totalSalary = round(basic+hra+da+allow-pf);


        if (grade=='A'){
            allow =1700;
            
        }
        else if(grade =='B'){
            allow=1500;
            
        }
        else {
            allow =1300;
            
        }

        int totalSalary;
        totalSalary = round(basic+hra+da+allow-pf);
        cout<<totalSalary<<endl;
       
       

       

       return 0;
}