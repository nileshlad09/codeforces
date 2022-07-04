//Nilesh Lad
//04-07-2022 

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,q;
    cin>>n>>q;
    long long a[n];
    long long x,y;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    
    long long b[n+1];
    for(long long i = 0;i<n;i++){
        b[i+1]=b[i]+a[i];
    }

    while(q--){
        cin>>x>>y;
        cout<<b[x]-b[x-y]<<endl;
    }
    return 0;
}