#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,r,l;
    cin>>n;
    while (n>9){
        k=n;
        l=0;
        while (k!=0){
            r=k%10;
            k=k/10;
            l+=r*r;
        }
        n=l;
    }
    if (n==1 or n==7) cout<<"True";
    else cout<<"False";
}