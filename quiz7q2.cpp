#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string x){
int l=x.length(),i=0,j=1;
if (l==1) return 1;
for (i;i<(l/2);i++,j++){
    if(x[i]==x[l-j]){
      return 1;
    }
    else{
      i=l;
    }
}
return 0;
}

int main(){
  string z;
  int a;
  cout <<
  cout<< "Write a word you'll like to know if it's a palindrome: ";
  cin>>z;
  a=isPalindrome(z);
  if (a==0) cout<<" Not precisely, the word "<<z<<" it's not a palindrome"<<endl;
  if (a==1) cout<<" Congratulations! the word "<<z<<"  it's a palindrome!"<<endl;
  return 0;
}
