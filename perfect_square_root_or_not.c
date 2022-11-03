#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    k=n/2;
    int c=0;
    for(int i=1;i<=k;i++)
    {
        if (n%i==0)
        {
            if (i*i==n) 
            {
                c+=1;
                cout<<"True";
            }
        }
    }
    if (c==0) cout<<"False";
}