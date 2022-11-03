#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,l,t;
    cin>>a>>b;
    t=2;
    l=1;
    while(a!=0){
        if(a%t==0 and b%t==0){
            a=a/t;
            b=b/t;
            l=l*t;
        }
        else{
            t+=1;
            if (a<t or b<t){
                break;
            }
        }
    }
    cout<<l*a*b;
}