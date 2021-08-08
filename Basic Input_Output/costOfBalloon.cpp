#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int g,p;
        cin>>g>>p;
        int n,q1,q2;
        cin>>n;
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            cin>>q1>>q2;
            if(q1==1) c1++;
            if (q2 ==1) c2++;
        }
        int sum1 = c1*g+c2*p;
        int sum2 = c1*p + c2*g;
        cout<<min(sum1,sum2)<<"\n";
    }
    return 0;
}
