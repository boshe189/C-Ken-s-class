#include <iostream>
using namespace std;

int sum (int x, int y) {
  return x + y;
}

int substraction (int x, int y){
return x-y;
}

int product (int x, int y){
  return x*y;
}

int division (int x, int y) {
  return x/y;
}

int remainder (int x , int y){
  return x%y;
}

int main () {
  int x;
  int y;
  cout << "Hi! This is a super incredible calculator (Which works with just two numbers)" <<endl;
  cout <<"Please, give me your first number: "  << endl; cin >> x;
  cout << "Give me your second (and last) number: " <<endl; cin >> y;

  cout << "The sum of your numbers is: " << sum (x,y) << endl;
  cout << "The substraction of your numbers is: " << substraction (x,y) << endl;
  cout << "The product of your numbers is: " << product (x,y) << endl;
  cout << "The division of your numbers is: " << division (x,y) << "and the remainder: " << remainder (x,y) << endl;
  return 0;
}
