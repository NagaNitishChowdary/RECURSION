#include<bits/stdc++.h>
#define ll long long int
#define nline "\n"
using namespace std;

void solve(int arr[],int sizeofarray)
{
    ll temp;
    for(int i=0,j=sizeofarray-1;i<sizeofarray/2;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
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
