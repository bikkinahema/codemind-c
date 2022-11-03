#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b;
    while(b!=0){
        if(a>b){
            t=a;
            a=b;
            b=t;
        }
        b=b%a;
        if(b==0){
            cout<<a;
            break;
        }
    }
}