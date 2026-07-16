#include<iostream>
#include<vector>
using namespace std;

void transposeMatrix(vector<vector<int>> & mat){
    int rows = mat.size();
    int cols = mat[0].size();

    vector<vector<int>> ans(rows, vector<int> (cols,0));


    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            ans[i][j] = mat[j][i];
        }
    }

    for(int i = 0; i < (int) ans.size(); i++){
        for(int j = 0; j < (int) ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> mat = {
        {1,2,3,4},
        {3,4,5,6},
        {5,6,7,6},
        {6,5,4,3}
    };

    transposeMatrix(mat);
    return 0;
}