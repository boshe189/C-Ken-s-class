#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int checkBanana(string F){
string text;
int bananas=0;
int location= 0;
ifstream file(F);

if (file.is_open()==1){
    cout << "The file was opened"<<endl;
    while(getline(file, text));
file.close();
for (int a=0;a<text.length();a++){
    if(isupper(text[a])) text[a]=tolower(text[a]);
}
while (text.find("banana", location)!=-1){
    bananas++;
    location= text.find("banana",location)+1;
}
return bananas;
}

else cout << "The file could not be opened";
return 0;
}

int main(){
string filename;
cout << "Enter the name of a file: ";
getline(cin, filename);
cout << "The number of bananas in the file was: " << checkBanana(filename) << endl;
}
