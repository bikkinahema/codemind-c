#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,rev,t;
    cin>>n;
    t=n;
    if(n<0)
    {
        n=n*(-1);
    }
    rev=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(t<0)
    {
        cout<<rev*(-1);
    }
    else  cout<<rev;
    
}