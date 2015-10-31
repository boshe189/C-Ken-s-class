#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
int main () {
  int x;
  srand (time(NULL));
  int r= rand() % 100 + 1;
  cout << "Guess a number.";
  cin >> x;
  while (x!=r)
  {
    if (x<r)
    {
      cout <<"That number is too low. Guess again." << endl;
      cin >> x;
    }
    if (x>r)
    {
      cout << "That number is too big. Guess again." << endl;
      cin >> x;
    }
    if (x==r)
    {
      cout << "Congratulations! You've guessed the right number." << endl;
    }
  }
}
