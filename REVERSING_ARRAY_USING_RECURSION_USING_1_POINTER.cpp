#include<bits/stdc++.h>
#define ll long long int 
#define nline "\n"
using namespace std;

int n,arr[10];

void swap(int a,int b){
    ll temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void reversearray(int i)
{
    if(i>=n/2){
        return;
    }
    swap(i,n-i-1);
    reversearray(i+1);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        arr[i]=m;
    }
    reversearray(0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
