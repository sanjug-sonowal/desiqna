#include<iostream>
#include<vector>
using namespace std;

void evenOddTripletSumCount(vector<int>& arr){
    int n = arr.size();
    int even_count = 0;
    int odd_count = 0;

    for(int i = 0; i < n - 2; i++){
        int triplet_sum = 0;
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                triplet_sum = arr[i] + arr[j] + arr[k];
                if(triplet_sum % 2 == 0){
                    even_count++;
                }else{
                    odd_count++;
                }
            }
        }
    }

    cout<<"Even Count : "<<even_count<<endl;
    cout<<"Odd Count : "<<odd_count<<endl;
}

int main(){
    vector<int> arr = {3,4,5,2,5,65,7,3};
    evenOddTripletSumCount(arr);
    return 0;
}