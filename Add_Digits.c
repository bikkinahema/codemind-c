#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,p;
    cin>>n;
    while(n>9){
        p=n;
        int s=0;
        while(p!=0)
        {
            r=p%10;
            p=p/10;
            s+=r;
        }
        n=s;
    }
    cout<<n;
    
}