#include<iostream>
#include<vector>
using namespace std;

void countDistinctElements(vector<int>& arr){
    int counter = 0;
    int n = arr.size();
    int maxi = arr[0];
    for(int x : arr){
        maxi = max(maxi,x);
    }
    vector<int>visited(maxi + 1, false);

    for(int i = 0; i < n; i++){
        if(visited[arr[i]] == false){
            counter++;
            visited[arr[i]] = true;
        }
    }

    cout<<"Count : "<<counter<<endl;
}

int main(){
    vector<int> arr = {3,4,5,4,2,3,3,2,1,3,33};
    countDistinctElements(arr);
    return 0;
}