#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,a,rev ;
    cin>>n;
    a=n;
    rev=0;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        rev=rev*10+r;
    }
    if (n==rev )  
        cout <<"True";
    else 
        cout<<"False";
    
}