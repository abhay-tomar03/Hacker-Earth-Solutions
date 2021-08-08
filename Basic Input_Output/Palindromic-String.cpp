#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int flag =0;
    for(int i=0;i<(str.size()/2);i++){
        if(str[i] != str[str.size()-i-1]){
            flag =1;
            break;
        }
    }
    if(flag ==1 ){
        cout<<"No";
    } else {
        cout<<"Yes";
    }
}
