#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

/*****************KNNC******************/

void solve(int n,int i)
{
    if(n<1) return;
    //for(ll i=0;i<n;i++) cout<<"*"<<" "; cout<<endl;
    if(i<n){
        cout<<"*"<<" ";
        solve(n,i+1);
    }
    else{cout<<nline;solve(n-1,0);}
}

int main(int argc,char const *argv[]) {
    clock_t begin=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    //ll testCases;
    //cin>>testCases;
    //while(testCases--)
    //ll c,d;cin>>c>>d; 
    solve(4,0);
    //cout<<a<<nline;

    //#ifndef ONLINE_JUDGE
    clock_t end=clock();
    cout<<"\n\nExecuted in:"<<double(end-begin)/CLOCKS_PER_SEC*1000<<" ms";
    //#endif 
    return 0;  
}

