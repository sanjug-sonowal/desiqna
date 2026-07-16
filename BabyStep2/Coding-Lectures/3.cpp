#include<iostream>
#include<vector>
using namespace std;

void pairSum(vector<int> & arr){
    int n = arr.size();
    vector<int> res;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i + 1; j < n; j++){
            sum += arr[i] + arr[j];
        }

        res.push_back(sum);
    }

    for(int i = 0; i < (int) res.size(); i++){
        cout<<res[i]<<" ";
    }
}

int main(){
    vector<int> arr = {4,2,4,5,6,2,3,4};
    pairSum(arr);
    return 0;
}