#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
         int size;
        cin>>size;
    string str;
    cin>>str;
    // using stoi() function to convert number string into its integer value
    // the argument is the string

    long long int result =0;
    long long int power2=1;
    for(int i= str.size()-1;i>=0 ;i--){
        int binary_digit = str[i] -'0';
        result = result + (binary_digit * power2);
        power2 *=2;
    }
    cout<<result<<"\n";
}

}
