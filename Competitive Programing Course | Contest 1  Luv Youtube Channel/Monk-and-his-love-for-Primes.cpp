#include<bits/stdc++.h>
using namespace std;
bool isprime(int n);

int main(){
    string str;
cin>>str;
string s1="",s2="";
for(int i=0;i<str.length();i++){
    if(isupper(str[i])) s1 += tolower(str[i]);
    if(islower(str[i])) s2 += toupper(str[i]);
}

cout<<(s1)<<" "<<(s2);
int r1 =0,r2=0;

for(int i=0;i<s1.length();i++){
     r1 += s1[i];
}

for(int i=0;i<s2.length();i++){
    r2 +=s2[i];
}
 cout<<"\n";

int result = r1-r2;


if(result<0){
    result *=-1;
    cout<<result<<"\n";
    cout<<isprime(result);
} else {
    cout<<isprime(result);
}


}


bool isprime(int n){

    for(int i=2;i<sqrt(n);i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;

}
