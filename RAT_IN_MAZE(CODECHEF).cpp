#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

/*****************KNNC******************/

int totalPaths=0;

bool safe(int i,int j,int n){
    return i>=0 and i<n and j>=0 and j<n;
}

void ratInMaze(vector<vector<int>>&arr,int n,int i,int j,vector<vector<int>>&visited){
    if(arr[n-1][n-1]==1) return; //destination is blocked
    if(i==n-1 && j==n-1){
        totalPaths++; //one possible way
        return;
    }
    if(not safe(i,j,n)) return; //out of boundary
    visited[i][j]=1;
    if(safe(i-1,j,n) and arr[i-1][j]==0 and visited[i-1][j]==0){
        ratInMaze(arr,n,i-1,j,visited);
    }
    if(safe(i+1,j,n) and arr[i+1][j]==0 and visited[i+1][j]==0){
        ratInMaze(arr,n,i+1,j,visited);
    }
    if(safe(i,j+1,n) and arr[i][j+1]==0 and visited[i][j+1]==0){
        ratInMaze(arr,n,i,j+1,visited);
    }
    if(safe(i,j-1,n) and arr[i][j-1]==0 and visited[i][j-1]==0){
        ratInMaze(arr,n,i,j-1,visited);
    }
    visited[i][j]=0;
}

int main(int argc,char const *argv[]) {
    clock_t begin=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;cin>>n;
    vector<vector<int>>arr(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>visited(n,vector<int>(n,0));
    ratInMaze(arr,n,0,0,visited);
    cout<<totalPaths<<endl;
    
    return 0;  
}

