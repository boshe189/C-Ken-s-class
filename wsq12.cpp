#include <iostream>
using namespace std;

 int g (int x, int y){
   if (x==0){
     return y;
   }
   else if (y==0){
     return x;
   }
   else { if(x>y){

       while(y!=0){
int a=x/y, b= x%y;
         x=y;
         y=b;
       }
   return x;
   }
   if (y>x){
     while(x!=0){
  int a=y/x, b=y%x;
       y=x;
       x=b;
     }
     return y;
   }
   }
}

int main(){

int d,c,e;

cout << "Enter a number: " << endl;
cin>>d;
cout<<"Enter another number: "<< endl;
cin>>c;

e= g(d,c);

cout << "The greatest common divisor of your numbers is: "<< e << endl;

return 0;

 }
