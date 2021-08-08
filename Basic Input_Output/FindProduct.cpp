
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int ans =1;
    for(int i=0;i<n;i++){
        ans = ans * arr[i] %(1000000007);
    }
    cout<<ans;
    return 0;
}
