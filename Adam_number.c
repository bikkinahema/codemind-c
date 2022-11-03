#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,rev,r,s,p,re;
    cin>>n;
    t=n*n;
    rev=0;
    while (n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    s=rev*rev;
    re=0;
    while (s!=0)
    {
        p=s%10;
        s=s/10;
        re=re*10+p;
    }
    if(re==t) cout<<"True";
    else cout<<"False";
}