#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,k,r,t,u;
    p=1;
    int s=0;
    cin>>n;
    k=n;
    int l=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        l=l*10+r;
    }
    while (l!=0){
        u=l%10;
        l=l/10;
        t=pow(u,p);
        s+=t;
        p++;
    }
    if (s==k) cout<<"True";
    else cout<<"False";
}