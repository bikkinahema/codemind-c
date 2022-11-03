#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rev;
    cin>>n;
    int r;
    rev=0;
    while (n!=0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev;
}