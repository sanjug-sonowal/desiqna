#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 0; i < n; i++){
        // spaces
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }

        // increasing number printing
        for(int j = i + 1; j < (2 * i) + 1; j++){
            cout<<j;
        }

        // decreasing number printing
        for(int j = (2 * i) + 1; j > i; j--){
            cout<<j;
        }

        cout<<endl;

    }
    return 0;
}