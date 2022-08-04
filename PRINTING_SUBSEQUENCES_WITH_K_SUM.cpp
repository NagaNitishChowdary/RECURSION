#include<bits/stdc++.h>
#define eb emplace_back
#define pb pop_back
#define ll long long int 
#define nline "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void subsequence(int ind,vector<int>&vt1,int s,int sum,int arr[],int n)
{
    if(ind>=n){
        if(s==sum){
            for(auto it:vt1)cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    vt1.eb(arr[ind]);
    s+=arr[ind];
    subsequence(ind+1,vt1,s,sum,arr,n);
    vt1.pb();
    s-=arr[ind];
    subsequence(ind+1,vt1,s,sum,arr,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(ll i=0;i<n;i++){
        int numb;
        cin>>numb;
        arr[i]=numb;
    }
    int sum=4;
    vector<int>vt1;
    int s=0;
    subsequence(0,vt1,s,sum,arr,n);
}
