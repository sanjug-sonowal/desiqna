#include<iostream>
#include<vector>
using namespace std;

void boundaryMatrix(vector<vector<int>> & mat){
    int n = mat.size();
    int m = mat[0].size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == m - 1){
                cout<<mat[i][j]<<" ";
            }else{
                cout<<"  "; // keep two spaces for not misaligned
            }
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> arr = {
        {1,2,3,4,5},
        {3,4,2,5,6},
        {5,6,7,8,3},
        {4,3,2,6,7}
    };

    boundaryMatrix(arr);
    return 0;
}