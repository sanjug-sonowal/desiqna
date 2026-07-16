#include<iostream>
#include<vector>
using namespace std;

void tripletSum(vector<int>& arr){
    int n = arr.size();

    for(int i = 0; i < n - 2; i++){
        int sum = 0;
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                cout<< arr[i] + arr[j] + arr[k] << " ";
            }
        }
        
    }
}

int main(){
    vector<int> arr = {1,3,4,5,6,7,5};
    tripletSum(arr);
    return 0;
}