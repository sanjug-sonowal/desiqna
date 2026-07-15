#include<iostream>
using namespace std;

int main(){
    int n = 5;
    
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 1; j <= i + 1; j++){
            cout<<j;
            sum += j;
            if(j < i + 1){
                cout<<"+";
            }
        }
        cout<<"="<<sum;
        cout<<endl;
    }
    return 0;
}