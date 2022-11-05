#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       int n;
       cin>>n;
       int f=1;
       for(int j=1;j<=n;j++)
       {
           f*=j;
       }
       cout<<f<<endl;        
    }
}