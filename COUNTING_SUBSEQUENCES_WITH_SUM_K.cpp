#include<bits/stdc++.h>
#define eb emplace_back
#define pb pop_back
#define ll long long int 
#define nline "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

int subsequence(int ind,int s,int sum,int arr[],int n)
{
    if(ind>=n){
        if(s==sum) return 1;
        else return 0;
    }
    s+=arr[ind];
    int l=subsequence(ind+1,s,sum,arr,n);
    s-=arr[ind];
    int r=subsequence(ind+1,s,sum,arr,n);
    return l+r;
}

int main()
{
    IOS
    int arr[]={1,2,1};
    int sum=2;
    int n=3;
    cout<<subsequence(0,0,sum,arr,n);
}
