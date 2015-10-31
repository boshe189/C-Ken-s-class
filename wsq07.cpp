#include <iostream>
using namespace std;
int x, y;
int r=0;
void sum (int x,int y)
{
while (x<=y)
{
r=r+x;
x++;
}
}
int main()
{
  cout << "This program will calculate the sum of integers in range you give." << endl;
  cout << "Please give the first number: " << endl; 
  cin >> x ;
  cout << "Please give the second number: " << endl;
  cin >> y;
  if (x<=y)
  {
    ssum (x,y);
    
  }
  else
  {
    cout <<"Please do it correctly." ;
    sum (y,x);
  }
cout << endl;
cout<<"The sum of your numbers is: " << r << endl;
return 0;
}
