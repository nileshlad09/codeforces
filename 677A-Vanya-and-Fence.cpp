//Nilesh Lad
//23-06-2022 - Thursday
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int a[n],width=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>h){
            width+=2;
        }
        else{
            width+=1;
        }
    }
    cout<<width; 
}