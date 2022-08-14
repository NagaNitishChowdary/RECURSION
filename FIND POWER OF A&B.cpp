#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

/*****************KNNC******************/

int solve1(int a,int b){
    if(b==0) return 1;
    return a*solve1(a,b-1);
}

int solve(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    int temp=solve(a,b/2);
    if(b%2==0) return temp*temp;
    else return a*temp*temp;
}

int main(int argc,char const *argv[]) {
    clock_t begin=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    //ll testCases;
    //cin>>testCases;
    //while(testCases--)
    ll c,d;cin>>c>>d; 
    ll a=solve(c,d);
    cout<<a<<nline;

    //#ifndef ONLINE_JUDGE
    clock_t end=clock();
    cout<<"\n\nExecuted in:"<<double(end-begin)/CLOCKS_PER_SEC*1000<<" ms";
    //#endif 
    return 0;  
}

