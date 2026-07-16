#include<iostream>
#include<vector>
using namespace std;

void snakeMatrix(vector<vector<int>>& mat){
    int n = mat.size();
    int m = mat[0].size();

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < m; j++){
                cout<<mat[i][j]<<" ";
            }
        }else{
            for(int j = m - 1; j >= 0; j--){
                cout<<mat[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> mat = {
        {1,2,3,4},
        {4,4,5,6},
        {6,4,3,2},
        {6,5,3,2}
    };

    snakeMatrix(mat);

    return 0;
}