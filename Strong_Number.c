#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,o,p,r,d;
    cin>>n;
    o=n;
    d=0;
    while(n!=0)
    {
        r=n%10;
        p=1;
        while(r!=0)
        {
            p=p*r;
            r-=1;
        }
        n=n/10;
        d+=p;
    }
    if(d==o) cout<<"The"<<" "<<"number"<<" "<<o<<" "<<"is"<<" "<<"a"<<" "<<"strong"<<" "<<"number";
    else cout<<"The"<<" "<<"number"<<" "<<o<<" "<<"is"<<" "<<"not"<<" "<<"a"<<" "<<"strong"<<" "<<"number";
}