#include<bits/stdc++.h>
#define ll long long int
#define nline "\n"
using namespace std;

void solve(int arr[],int sizeofarray)
{
    ll temp;
    for(int i=0;i<sizeofarray/2;i++){
        temp=arr[i];
        arr[i]=arr[sizeofarray-i-1];
        arr[sizeofarray-i-1]=temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        arr[i]=m;
    }
    int sizeofarray=sizeof(arr)/sizeof(arr[0]);
    solve(arr,sizeofarray);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
