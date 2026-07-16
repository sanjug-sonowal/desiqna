#include<iostream>
#include<vector>
using namespace std;

void firstAndLastOccurance(vector<int> & arr,int target){
    int first = 0;
    int second = 0;

    for(int i = 0; i < (int) arr.size(); i++){
        if(arr[i] == target){
            if(first <= 0){
                first = i;
            }else{
                second = i;
            }
        }
    }

    cout<<"First : "<<first<<endl;
    cout<<"Second : "<<second<<endl;
}

int main(){
    vector<int> arr = {3,4,5,6,77,7,7,8,4,4,5};
    int target = 4;
    firstAndLastOccurance(arr,target);
    return 0;
}