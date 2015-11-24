#include <iostream>
using namespace std;
int main () {
float fahrenheit, celsius;
cout <<"Write a Temperature in Fahrenheit: ";
cin >> fahrenheit;
celsius= (fahrenheit-32)*5/9;
cout << fahrenheit << " F = " <<celsius << "C" << endl;
if (celsius >= 100) {
cout<<"Water will boil at this temperature"<< endl;
}
else {
cout<< "Water will not boil at this temperature"<< endl;
}
return 0;
}
