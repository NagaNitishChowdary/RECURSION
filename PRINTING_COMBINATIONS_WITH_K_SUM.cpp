#include<bits/stdc++.h>
using namespace std;

void findCombination(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds)
{
    if(ind==arr.size()){
        if(target==0){
            ans.emplace_back(ds);
        }
        return;
    }
    if(arr[ind]<=target){
        ds.emplace_back(arr[ind]);
        findCombination(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();
    }
    findCombination(ind+1,target,arr,ans,ds);
}

vector<vector<int>>combinationSum(vector<int>&candidates,int target){
    vector<vector<int>>ans;
    vector<int>ds;
    findCombination(0,target,candidates,ans,ds);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    //int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        int nu;
        cin>>nu;
        //arr[i]=nu;
        v.emplace_back(nu);
    }
    //vector<int>vt1;
    int target=7;
    vector<vector<int>>knnc;
    knnc=combinationSum(v,target);
    for(auto vctr:knnc){
        for(auto it:vctr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
