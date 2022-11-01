#include<bits/stdc++.h>

#define LL long long int 
#define EB emplace_back
#define PB pop_back
#define F first
#define S second
#define MP make_pair
#define NEXT "\n"
#define LOOP(i,a,b) for(int i=a;i<b;i++) 

using namespace std;

/*****************KNNC******************/
bool solve(int arr[],int ind,int n){
    if(ind>=n-1){
        return 1;
    }
    if(arr[ind]>arr[ind+1]) return 0;
    else return solve(arr,ind+1,n);
}

int main(int argc,char const *argv[]) {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<solve(arr,0,n);
    return 0;  
}
