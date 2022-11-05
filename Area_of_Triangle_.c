#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,s,p;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    p=sqrt((s*(s-a)*(s-b)*(s-c)));
    cout<<fixed<<setprecision(2)<<p;
}