#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    c=0;
    for(int i=1;i<=n; i++){
        if (n%i==0)
        {
            c+=1;
        }
    }
    if (c==2) cout<<"prime";
    else cout<<"not a prime";
}