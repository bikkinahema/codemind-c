#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int c=0;
        for(int j=1;j<=n;j++){
            if(n%j==0){
                if(j*j==n){
                    c+=1;
                    cout<<"True"<<endl;
                }
            }
        }
        if(c==0){
            cout<<"False"<<endl;
        }
    }
}