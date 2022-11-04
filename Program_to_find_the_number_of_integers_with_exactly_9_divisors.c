#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,k;
    k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c+=1;
            }
        }
        if(c==9)
        {
            cout<<i<<" ";
            k+=1;
        }
    }
    cout<<endl;
    cout<<"Total"<<"="<<k;
}