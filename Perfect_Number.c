#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s;
    cin>>n;
    s=0;
    k=(n/2);
    for(int i=1;i<=k+1;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(s==n) cout<<"True";
    else cout<<"False";
}