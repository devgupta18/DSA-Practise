#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    int row =  matrix.size();
    int col = matrix[0].size();

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(i != j && i>j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    for(int i=0; i<row; i++) {
        int start = 0, end = col - 1;
        while(start <= end) {
            swap(matrix[i][start++], matrix[i][end--]);
        }
    }

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}