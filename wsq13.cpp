#include <iostream>
using namespace std;

float SQRT(float n){
  float x = n;
  float y = 1;
  float e = 0.000001;
  while(x - y > e){
    x = (x + y)/2;
    y = n/x;
  }return x;
}
int main (){
  float n;
  cout<<"Enter a number to calculate its square root."<<endl;
  cin>>n;
  cout<<"The square root of your number is:"<<SQRT(n)<<endl;
  return 0;
}
