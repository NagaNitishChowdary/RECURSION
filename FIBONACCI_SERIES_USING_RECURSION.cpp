#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define eb emplace_back
#define nline "\n"
using namespace std;
//FIBONACCI SERIES
int solve(int t){
    if(t<=1){
        return t;
    }
    int last=solve(t-1);
    int secondlast=solve(t-2);
    return last+secondlast;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    //while(testCases--){
    cout<<solve(t);
    //}
}
