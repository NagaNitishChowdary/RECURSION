#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

/*****************KNNC******************/

void solve(int n,int i,string str){
    if(i>=n) return;
    else if(i==n-1){
        cout<<str<<nline;
        return;
    }
    solve(n,i+1,str+to_string(1)+",");
    solve(n,i+2,str+to_string(2)+",");
    solve(n,i+3,str+to_string(3)+",");
    solve(n,i+4,str+to_string(4)+",");
    solve(n,i+5,str+to_string(5)+",");
    solve(n,i+6,str+to_string(6)+",");

    // for(ll j=1;j<=6;j++) solve(n,i+j,str+to_string(j));
}

int main(int argc,char const *argv[]) {
    clock_t begin=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    //ll testCases;
    //cin>>testCases;
    //while(testCases--)
    int n; cin>>n;   
    //string str;
    solve(n,0,"");

    #ifndef ONLINE_JUDGE
    clock_t end=clock();
    cout<<"\n\nExecuted in:"<<double(end-begin)/CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;  
}

