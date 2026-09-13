#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> setZeroMAtrix(vector<vector<int>> &mat){
    int n = mat.size();
    int m = mat[0].size();

    bool isCol = true;

    for(int i = 0; i < n; i++){
        if(mat[0][0] == 0){
            isCol = false;
        }

        for(int j = 1; j < m; j++){
            if(mat[i][j] == 0){
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 1;  j  < m; j++){
            if(mat[i][j] != 0){
                if(mat[i][0] == 0 || mat[0][j] == 0){
                    mat[i][j] = 0;
                }
            }
        }
    }

    if(mat[0][0] == 0){
        for(int j =  0; j < m; j++){
            mat[0][j] = 0;
        }
    }

    if(!isCol){
        for(int i = 0; i < n; i++){
            mat[i][0] = 0;
        }
    }

    return mat;

}


int main(){
    int n;
    cout <<"Enter row: ";
    cin >> n;

    int m;
    cout <<"Enter column: ";
    cin >> m;

    vector<vector<int>>nums(n, vector<int> (m));

    for(int i = 0; i < n; i++){
        for(int j =  0; j < m; j++){
            cin >> nums[i][j];
        }
    }


    cout << endl <<"=====After set the zero in MAtrix=====" << endl;
    vector<vector<int>> ans = setZeroMAtrix(nums);

    for(int i = 0; i < ans.size(); i++){
        for(int j =  0; j < ans[0].size(); j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

}