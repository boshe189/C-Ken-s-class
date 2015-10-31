#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

int main()
{
  vector<int> datos;
  int x,i,len;
  cout<<"Introduce the numbers you want to take average and standard deviation. (Write two times zero numerically -> (00) when you want to stop.)"<<endl;
  cin >> x;
  while( x != 00) {
    datos.push_back(x);
    cin >> x;
  }
  len=datos.size();
  for(i = 0; i < len; i++) {
    cout << datos[i] <<", ";
  }
  cout<<endl;
  cout<<"The total is: ";
  float sum = accumulate( datos.begin(), datos.end(), 0.0 );
  cout<< sum;
  cout<<endl;
  cout<<"The average is: ";
  float average = (sum/len);
  cout<<average<<endl;
  float stddev=0;
  for(i = 0; i < len; i++) {
    stddev = stddev + (average-datos[i])*(average-datos[i]);
  }
  stddev = stddev / len;
  stddev = sqrt(stddev);
  cout<<"The standard deviation is: ";
  cout<<stddev<<endl;
  return 0;
}
