#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int arr[n];
        long long int sum=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum*=arr[i];
        }

        int ldigit = sum%10;
        if((ldigit == 2)  ||(ldigit == 3) || (ldigit == 5)) cout<<"YES"<<"\n";

        else cout<<"NO"<<"\n";

    }

}




