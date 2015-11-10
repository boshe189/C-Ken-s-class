#include <iostream>
using namespace std;

int triangles (int x)
{
  int i, j;
  for (i=1; i<=x; i++) {
    for (j=1; j<=i; j++){
      cout <<"T";
    }
    cout <<"\n";
  }
  for (i=x; i>=1; i--){
    for (j=1; j<=i; j++){
      cout<<"T";
    }
    cout<<"\n";
  }
}

int main ()
{
  triangles(6);

  return 0;
}
