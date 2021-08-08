
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int digit,sum=0;
    for(int i=0;i<n;i++){
        digit = arr[i]%10;
        sum= sum*10+digit;
        // cout<<sum<<" ";

    }
    if(sum % 10==0){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
}
