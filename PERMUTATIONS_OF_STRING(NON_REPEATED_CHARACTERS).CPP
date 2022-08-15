#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;

/*****************KNNC******************/

void permutations(string str,string perm){
    if(str.size()==0){
        cout<<perm<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        string rem=str.substr(0,i)+str.substr(i+1);
        permutations(rem,perm+ch);
    }
}

int main(int argc,char const *argv[]) {
    clock_t begin=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll testCases;
    cin>>testCases;
    string str;
    cin>>str;
    while(testCases--) permutations(str,"");

    #ifndef ONLINE_JUDGE
    clock_t end=clock();
    cout<<"\n\nExecuted in:"<<double(end-begin)/CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;  
}

