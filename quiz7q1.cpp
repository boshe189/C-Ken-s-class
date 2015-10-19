#include <iostream>
using namespace std;

long fibonacci (long n)
{
long i,x,y,z;
x=0;
y=1;
if (n==0) z=x;
if (n==1) z=y;
if (n>=2) {
for (i=0;i<=n-2;i++){
z=x+y;
x=y;
y=z;
}
return z;
}
}
int main (){
long n,r;

cout<< "Enter a number. (A positive number please!): " ; cin >> n;

r=fibonacci (n);
cout <<"Here is the number of the fibonacci series you choose.: " << r<< endl;
return 0;
}
