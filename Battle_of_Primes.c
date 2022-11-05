#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n1,n2;
   cin>>n1;
   cin>>n2;
   int c;
   c=n1+n2+1;
   int f;
   f=0;
   for(int i=c;i>=c;i++){
       int d;
       d=0;
       f+=1;
       for(int j=1;j<=i;j++)
       {
           if(i%j==0)
           {
               d+=1;
           }
       }
       if(d==2){
           cout<<f;
           break;
       }
   }
}