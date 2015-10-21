#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

int sumSquares_lists (){
  vector <int> nums;
  int x, i;
  cout<<"This program will take your numbers, raise them to squared power and sum those numbers. Introduce the numbers you want to work with. (Write two times zero numerically -> (00) when you want to stop.): "<<endl;
  cin >> x;

  while( x != 00 ){
  nums.push_back(x);
  cin >> x;

  }

  int ope=0;
  for(i=0; i<nums.size(); i++)
  ope = ope + pow(nums[i],2);

  cout << "The sum of the power squared of your numbers is: "<< ope << endl;
return ope;
}

int main() {
sumSquares_lists();
return 0;
}
