#include<iostream>
#include<vector>
using namespace std;

void evenOddIdxSum(vector<int>& arr){
    int eveIdxSum = 0;
    int oddIdxSum = 0;

    for(int i = 0; i < (int) arr.size(); i++){
        if(i % 2 == 0){
            eveIdxSum += arr[i];
        }else{
            oddIdxSum += arr[i];
        }
    }

    cout<<"Even Indices Sum : "<<eveIdxSum<<endl;
    cout<<"Odd Indices Sum : "<<oddIdxSum<<endl;
}

int main(){
    vector<int>arr = {2,4,5,6,7,4,2,12};
    evenOddIdxSum(arr);
    return 0;
}