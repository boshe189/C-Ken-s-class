#include <iostream>
#include <iomanip>
using namespace std;
int n=1;

float calculateE(float x){
if (x >= 1) return 2;
float diff=1, eval=0, factorial;
while  (diff > x){
factorial = 1;
for (int a=1; a<n;a++){
    factorial= factorial*a;
}
eval= eval + 1/factorial;
diff= 1/factorial;
n++;
}
return eval;
}

int main(){
float accuracy;
cout << "Enter the parameter for the calculation of e: ";
cin >> accuracy;
cout << "The number of necesary iterations is : " << setprecision(n)<< calculateE(accuracy);
return 0;
}
