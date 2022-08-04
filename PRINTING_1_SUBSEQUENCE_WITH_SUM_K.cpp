#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

bool sub(int ind,vector<int>&vt1,int s,int sum,int arr[],int n){
    if(ind>=n){
        if(s==sum){
            for(auto it:vt1)cout<<it<<" ";cout<<endl;
            return true;
        }
        else return false;

    }
    vt1.eb(arr[ind]);
    s+=arr[ind];
    if(sub(ind+1,vt1,s,sum,arr,n)==true){
        return true;
    }
    vt1.pop_back();
    s-=arr[ind];
    if(sub(ind+1,vt1,s,sum,arr,n)==true){
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=5,s=0;
    vector<int>vt1;
    sub(0,vt1,s,sum,arr,n);
}
