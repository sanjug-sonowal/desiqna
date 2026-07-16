#include<iostream>
using namespace std;
int main(){
    int start = 21;
    int end = 25;
    int rev_sum = 0;

    for(int i = start; i <= end; i++){
        int num = i;
        int rev = 0;

        while(num != 0){
            int rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }

        rev_sum += rev;
    }

    cout<<rev_sum<<endl;
    return 0;
}