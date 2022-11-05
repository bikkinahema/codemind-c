#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    int u;
    cin>>l;
    cin>>u;
    for(int i=l;i<=u;i++){
        int c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c+=1;
            }
        }
        if(c==2) cout<<i<<endl;
    }
    
    
}