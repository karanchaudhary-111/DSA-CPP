#include<bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
        
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i = 0; i < row; i++){
        for(int j = i; j < col; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i < row; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout <<"Enter row: ";
    cin >> n;

    int m;
    cout <<"Enter column: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);
}