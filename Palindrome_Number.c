#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,rev,p,t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        p=n;
        rev=0;
        while(n!=0){
            r=n%10;
            n=n/10;
            rev=rev*10+r;
        }
        if(rev==p) cout<<"True"<<endl;
        else cout<<"False"<<endl;
    }
}