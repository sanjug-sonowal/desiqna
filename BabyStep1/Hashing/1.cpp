#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Take input querys"<<endl;

    int q = 5;
    int query[5];

    for(int i = 0; i < q; i++){
        cin >> query[i];
    }

    int counter[5] = {0};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            if(query[j] == arr[i]){
                counter[j]++;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        cout<<counter[i]<<" ";
    }
}