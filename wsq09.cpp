#include <iostream>
using namespace std;

long factorial (long n){
  if (n< 0){
    cout << "Please give a non-negative integer number." << endl;
    return -1;
  }
  if (n==0){
    return 1;
  }
else {
  return n*factorial (n-1);
}
}
int main () { cout << "Hi! Give a integer number, so I can make it factorial. (Please): ";
long n;
cin>>  n;
cout <<"Here is your number: " << factorial(n) << endl;
return 0;
}
