#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int> arr = {4,4,4,3,2,4,3};
    vector<int> queries = {3,2,1,4};

    int n = arr.size();
    unordered_map<int,int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }

    for(int i = 0; i < queries.size(); i++){
        cout<<mp[queries[i]]<<" ";
    }
}