//Nilesh Lad
//23-06-2022 - Thursday

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int count=0,sum=0,c=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a,a+n,greater<int>());
    int sum1=a[0];
    while(sum1<=sum/2){
       count++;
       sum1=sum1+a[c];
       c++;
    }
    cout<<count+1<<endl;
    return 0;
}