#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

/*****************KNNC******************/

ll totalpaths=0;
void mazepath(int i,int j,int n,int m,string str){
    if(i==n-1 && j==m-1){
        cout<<str<<nline;
        totalpaths++;
        return;
    }
    if(i>=n || j>=m) return;
    mazepath(i,j+1,n,m,str+"R");
    mazepath(i+1,j,n,m,str+"D");
}

int main(int argc,char const *argv[]) {
    clock_t begin=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    //ll testCases;
    //cin>>testCases;
    //while(testCases--) solve();
    string str="";
    ll n,m;
    cin>>n>>m;
    mazepath(0,0,n,m,str);
    cout<<"The total number of mazepaths are: "<<totalpaths<<nline;

    #ifndef ONLINE_JUDGE
    clock_t end=clock();
    cout<<"\n\nExecuted in:"<<double(end-begin)/CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;  
}

