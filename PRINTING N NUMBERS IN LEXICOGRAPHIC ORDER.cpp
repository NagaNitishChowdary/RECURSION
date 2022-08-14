#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

/*****************KNNC******************/

void lexico(int n,int i){
    if(i>n) return;
    cout<<i<<nline;
    for(int j=(i==0)?1:0;j<=9;j++) lexico(n,10*i+j);
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
    lexico(n,0);

    #ifndef ONLINE_JUDGE
    clock_t end=clock();
    cout<<"\n\nExecuted in:"<<double(end-begin)/CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;  
}

