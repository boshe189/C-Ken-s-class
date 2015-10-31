#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;
int up;
int low;
int pnat=0;
int nop=0;
int ln=0;
BigInteger rev;
BigInteger num;

BigInteger reverse(BigInteger valid){
BigInteger invalid= 0;
while (valid != 0){
  invalid= invalid*10 + valid % 10;
  valid= valid/10;
}
  return invalid;
}

void palindrome(BigInteger x, BigInteger y){
  if(x == y){
pnat = pnat+1;
}
else {
int veces= 0;
BigInteger a= x;
while (a!=y && veces < 30){
a=a+y;
y= reverse(a);
veces = veces +1;
}
if (veces == 30){
  cout << "This is a Lynchrel number: " << x << endl;
  ln= ln+1;
}
else {
  nop=nop+1;
     }
  }
}

int main (){
cout << "We are going to see how many Lycherel numbers are." << endl;
 cout <<" Enter the lower bound:";
cin >> low;
cout << "Enter the upper bound: ";
cin >> up;
num = low;
while(num <= up){
rev= reverse(num);
palindrome(num, rev);
num = num + 1;
}

cout << "Your numbers are between: " << low << " and " << up << endl;
cout << " Your amount of natural palindromes : " << pnat << endl;
cout << " Your amount of non-Lycherel numbers: " << nop << endl;
cout << "Number of Lycherel numbers you get: " << ln << endl;

return 0;
}
