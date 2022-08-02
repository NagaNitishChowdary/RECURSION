#include<bits/stdc++.h>
using namespace std;
int n,arr[10];
/*
void swap(int l,int m){
    int temp=arr[m];
    arr[m]=arr[l];
    arr[l]=temp;
}
*/
//THERE IS INBUILD SWAP FUNCTION IN CPP
void reversearray(int l,int m){
    if(l>=m){
        return;
    }
    swap(arr[l],arr[m]);
    reversearray(l+1,m-1);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        arr[i]=m;
    }
    reversearray(0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
