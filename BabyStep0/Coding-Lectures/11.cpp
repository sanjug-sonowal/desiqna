#include<iostream>
#include<vector>
using namespace std;

void countFreq(vector<int>& arr){
    int maxi = arr[0];

    for(int x : arr){
        maxi = max(maxi,x);
    }
    int n = arr.size();
    vector<int> freq(maxi + 1, 0);

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    for(int i = 0; i < (int) freq.size(); i++){
        cout<<i<< " : "<<freq[i]<<endl;
    }
}

int main(){
    vector<int> arr = {2,2,2,3,3,3,4,4,5,6,6,7,7,7};
    countFreq(arr);
    return 0;
}