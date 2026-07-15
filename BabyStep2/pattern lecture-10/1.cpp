#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int rotateIdx = (i + j) % n;
            int val = 2 * rotateIdx + 1;
            cout<<val;
        }
        cout<<endl;
    }
    return 0;
}