#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"take querys"<<endl;

    int q;
    cin >> q;

    int* queries = new int[q];

    for(int i = 0; i < q; i++){
        cin >> queries[i];
    }

    int* hashArray = new int[n]();

  
        for(int i = 0; i < n; i++){
            hashArray[arr[i]]++;
        }

    cout<<"Printing hash arry"<<endl;

    for(int i = 0; i < q; i++){
        cout<<hashArray[queries[i]]<<" ";
    }
    
}