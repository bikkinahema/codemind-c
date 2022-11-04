#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,s,t;
    cin>>n;
    s=n*n;
    t=0;
    while(s!=0){
        r=s%10;
        s=s/10;
        t+=r;
    }
    if(t==n){
        cout<<"Neon Number";
    }
    else cout<<"Not Neon Number";
}