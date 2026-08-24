#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> diagonalSort(vector<vector<int>> &mat){
    int row = mat.size();
    int col = mat[0].size();

    map<int, vector<int> > mp;

    for(int i = 0; i < row; i++){
        for(int j =  0; j < col; j++){
            mp[i-j].push_back(mat[i][j]);
        }
    }

    for(auto &it: mp){
        sort(it.second.begin(), it.second.end());
    }

    for(int i = row -1; i >= 0; i--){
        for(int j = col -1; j >= 0; j--){
            mat[i][j] = mp[i-j].back();
            mp[i-j].pop_back();
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


    vector<vector<int>> ans = diagonalSort(nums);

    for(int i = 0; i < ans.size(); i++){
        for(int j =  0; j < ans[0].size(); j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

}