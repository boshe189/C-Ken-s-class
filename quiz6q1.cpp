#include <iostream>
using namespace std;
int potencia (int a,int b)
{
int i, x;
i=1;
x=1;
while (i<=b)
{
x=x*a;
i=i+1;
}
return x;
}
int main ()
{
int a,b;
cout <<"Hi! This program that will raise a number to a power." <<endl;
cout <<"Give the number you want to raise: " << endl; cin >> a;
cout <<"Give the power: " << endl ; cin >> b ;
cout <<"Your answer is:" << potencia (a,b) << endl;
return 0;
}
