#include <iostream>
using namespace std;

float convert_mileage (float mpg) {
  float metric;
  mpg = ((0.264172)/(1/1.60934)*mpg);
  metric= (100*(1/mpg));
  return metric;
}

int main (){
  float mpg;
  cout << "How many mpg's do you want to convert to L/100km's?: " << endl; cin >> mpg;
  cout << mpg << " mpg to L/100km is: " <<endl;
  cout << convert_mileage (mpg) << endl;
  return 0;
}
