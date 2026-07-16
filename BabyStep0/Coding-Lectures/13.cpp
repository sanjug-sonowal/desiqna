#include<iostream>
#include<vector>
using namespace std;

void printLeftDiagonal(vector<vector<int>>& mat){
    int n = mat.size();
    int leftSum = 0;

    for(int i = 0; i < n; i++){
        leftSum += mat[i][i];
    }

    cout<<"Left Diagonal Sum : "<<leftSum<<endl;
}

void printRightDiagonal(vector<vector<int>>& mat){
    int n = mat.size();
    int rightDiagSum = 0;

    for(int i = 0; i < n; i++){
        rightDiagSum += mat[i][n - 1 - i];
    }

    cout<<rightDiagSum<<endl;
}

void diagSum(vector<vector<int>> & mat){
    int sum = 0;
    int n = mat.size();

    for(int i = 0; i < n; i++){
        sum += mat[i][i];

        // condition is because, yaha center ek baar
        // add ho chuka hai sum me and dobara add
        // nahi krna chahte hai so that using this 
        // condition
        if(i != n - i - 1){
            sum += mat[i][n - 1 - i];
        }
    }

    cout<<sum<<endl;
}

int main(){
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printRightDiagonal(mat);
    return 0;
}