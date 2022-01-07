//Problem Link-Not Given
//Problem Name on GFG-find N largest elements from a list
#include<bits/stdc++.h>
using namespace std;
int func(vector<int> arr,int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
