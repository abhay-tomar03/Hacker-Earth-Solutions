#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
getline(cin,str);
  cout<<str.length()<<"\n";
  for(int i=0;i<str.length();i++){
    if(islower(str[i])) {
        str[i] = toupper(str[i]);
        cout<<str[i];
    }
    else if(str[i]=' ') cout<<"\n";
  }



}
