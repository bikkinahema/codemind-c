#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n;
    a=0;
    b=1;
    if (n==a) cout<<a;
    else cout<<a<<" "<<b<<" ";
    for (int i=3;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    
}