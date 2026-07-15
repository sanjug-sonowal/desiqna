#include<iostream>
using namespace std;

int main(){
    int n = 3;

    for(int i = 0; i < n; i++){
        // spaces
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }

        // numbers
        for(int j = 0; j < i + 1; j++){
            cout<< j + 1;
        }
        cout<<endl;
    }
    return 0;
}