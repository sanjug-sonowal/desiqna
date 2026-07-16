#include<iostream>
#include<vector>
using namespace std;

void maxPairSum(vector<int>&arr1, vector<int>&arr2){
    int maxi = 0;
    int n = arr1.size();
    int m = arr2.size();

    for(int i = 0; i < n; i++){
        int sum = arr1[i] + arr2[i];

        maxi = max(maxi,sum);
    }

    cout<<"Maximum Sum : "<<maxi;
}

int main(){
    vector<int>arr1 = {3,4,5,6,2,4,5};
    vector<int>arr2 = {4,5,6,3,4,5,5};

    maxPairSum(arr1,arr2);

    return 0;
}