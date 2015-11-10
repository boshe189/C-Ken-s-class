#include <iostream>
#include <vector>
using namespace std;

long find_threes (vector<int> v){
  long len;
  len= v.size();
  long sum=0;
  for (int i=0; i<len; i++)
  if ((v[i]%3)==0){
    sum = sum + v[i];}
    return sum;}

int main () {
  vector<int> v;
  long x;
  cout <<"Introduce the values for the vector (007 = stop): " <<endl;
  cin>>x;
  while(x!= 007){
    v.push_back(x);
    cin>>x;
  }
  cout<<"The sum of the numbers that are factors of 3 is: " <<endl;
  cout << find_threes (v) <<endl;
  return 0;
}
