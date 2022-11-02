#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,t,k;
    cin>>n;
    a=0;
    b=1;
    t=0;
    if (n==0 or n==1) cout<<"True";
    k=n/2;
    for (int i=3;i<=k;i++)
    {
        c=a+b;
        t=a;
        a=b;
        b=c;
        if(n<c){
            cout<<"False";
             break;
        }
        if(n==c){
            cout<<"True";
             break;
        }
    }
    
}