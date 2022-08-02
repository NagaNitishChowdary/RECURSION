#include<bits/stdc++.h>
#define nline "\n"
using namespace std;

int palindrome(int i,string str){
    int n=str.size();
    if(i>=n/2)return true;
    if(str[i]!=str[n-i-1])return false;
    return palindrome(i+1,str);
}

int main()
{
    string str;
    cin>>str;
    if(palindrome(0,str)==1){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"NOT A PALINDROME"<<endl;
    }
}
