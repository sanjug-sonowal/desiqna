#include<iostream>
#include<vector>
using namespace std;

void evenOddSum(vector<int>& arr){
    int evenSum = 0;
    int oddSum = 0;

    for(int i = 0; i < (int) arr.size(); i++){
        if(arr[i] % 2 == 0){
            evenSum += arr[i];
        }else{
            oddSum += arr[i];
        }
    }

    cout<<"Even Sum : "<<evenSum<<endl;
    cout<<"Odd Sum : "<<oddSum<<endl;
}

int main(){
    vector<int> arr = {3,4,6,7,2,3,6};
    evenOddSum(arr);
    return 0;
}
