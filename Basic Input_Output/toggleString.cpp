#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        // we use isupper and islower functions which checks if the character is an uppercase or lowercase
    
         if(isupper(str[i])){
            str[i] = tolower(str[i]);
         } else {
            str[i] = toupper(str[i]);
         }
    }
    cout<<str;
}
