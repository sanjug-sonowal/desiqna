#include<iostream>
#include<vector>
using namespace std;

void printZMatrix(vector<vector<int>> & mat){
    int n = mat.size();
    int topRow = 0;
    int bottomRow = n - 1;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == topRow || i == bottomRow || j == n - 1 - i){ // || (i + j) == n - 1 or j == n - 1 - i u can use this both for secondary diagonal printing
                cout<<mat[i][j]<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printZMatrix(mat);
    return 0;
}