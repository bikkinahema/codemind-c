#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    int s=0;
    cin>>n;
    p=(n/2);
    for(int i=1;i<=p+1;i++){
        if (n%i==0){
            s+=i;
        }
    }
    if (s>n) cout<<"True";
    else cout<<"False";
}