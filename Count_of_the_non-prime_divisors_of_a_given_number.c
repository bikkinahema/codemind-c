#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,d;
    cin>>n;
    d=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=0;
            for(int j=1;j<=i+1;j++)
            {
                if(i%j==0)
                {
                    c+=1;
                }
            }
            if(c==1 or c>2)
            {
                d+=1;
            }
        }
    }
    cout<<d;
}