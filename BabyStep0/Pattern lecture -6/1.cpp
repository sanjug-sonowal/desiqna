#include<iostream>
#include<vector>
using namespace std;

int main(){

    // optimal solution
    int n = 5;
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        int top = i, bottom = n-1-i;
        int left = j, right = n-1-j;
        int layer = min(min(top, bottom), min(left, right));
        // cout << layer + 1 << " "; // for increasing order
        cout<< n - layer << " "; // for decreasing order
    }
        cout << endl;
    }
    return 0;


    // naive solution using two pointer's
    // int n = 5;
    // int len = 2 * n - 1;
    // int start = 0;
    // int end = len - 1;

    // vector<vector<int>> mat(len, vector<int>(len));

    // while(n != 0){
    //     for(int i = start; i <= end; i++){
    //         for(int j = start; j <= end; j++){
    //             if(i == start || j == end || j == start || i == end){
    //                 mat[i][j] = n;
    //             }
    //         }
    //     }

    //     start++;
    //     end--;
    //     n--;
    // }

    // for(int i = 0; i < mat.size(); i++){
    //     for(int j = 0; j < mat[0].size(); j++){
    //         cout<<mat[i][j];
    //     }
    //     cout<<endl;
    // }
}