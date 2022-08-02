#include<bits/stdc++.h>
#define nline "\n"
using namespace std;

//A subsequence is a sequence that can be derived from another sequence by removing zero or more elements,
//without changing the order of the remaining elements

void subsequence(int ind,int sizeofarray,int arr[],vector<int>&vt1)
{
    if(ind==sizeofarray){
        for(auto it:vt1){
            cout<<it<<" ";
        }
        if(vt1.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    vt1.emplace_back(arr[ind]);
    subsequence(ind+1,sizeofarray,arr,vt1);
    vt1.pop_back();
    subsequence(ind+1,sizeofarray,arr,vt1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        arr[i]=m;
    }
    vector<int>vt1;
    subsequence(0,n,arr,vt1);
}
