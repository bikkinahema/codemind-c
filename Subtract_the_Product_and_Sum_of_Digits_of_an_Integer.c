#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,s,p;
    cin>>n;
    s=0;
    p=1;
    while(n!=0){
        r=n%10;
        n=n/10;
        s+=r;
        p*=r;
    }
    cout<<(p-s);
}