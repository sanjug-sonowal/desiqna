//optimised find all prime numbers
#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
    if(n < 2) return false;

    for(int i = 0; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void findAllPrimes(int n){
    vector<int>res(n + 1, true);
    res[0] = res[1] = false;

    for(int i = 2; i * i <= n; i++){
        if(res[i]){
            for(int j = i * i; j <= n; j += i){
                res[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; i++){
        if(res[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n = 30;
    findAllPrimes(n);
    return 0;
}