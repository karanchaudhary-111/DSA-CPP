#include<bits/stdc++.h>

using namespace std;

vector<int> traverseDiag(vector<vector<int>> & mat){
    int row = mat.size();
    int col = mat[0].size();

    map<int, vector<int> > mp;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            mp[i+j].push_back(mat[i][j]);
        }
    }

    vector<int> ans;

    for(auto & it: mp){
        if(it.first % 2 == 0){
            reverse(it.second.begin(), it.second.end());
        }
        for(auto & num : it.second){
            ans.push_back(num);
        }
    }
    return ans;
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

    vector<int> ans = traverseDiag(nums);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

}