#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n;
    l=0;
    while (n!=0){
        r=n%10;
        n=n/10;
        if (r>l){
            l=r;
        }
    }
    cout<<l;
}