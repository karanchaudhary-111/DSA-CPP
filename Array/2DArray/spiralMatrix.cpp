#include<bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    if(matrix.size() == 0)
        return {};

    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> result;
    int top   = 0;
    int down  = m-1;
    int left  = 0;
    int right = n-1;
    
    int id = 0;
    //id = 0   -> left  to right and top++
    //id = 1   -> top   to down and right--
    //id = 2   -> right to left and down--
    //id = 3   -> down  to top and left++

    while(top <= down && left <= right) {
        //left to right
        if(id == 0) {
            for(int i = left; i<=right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++;
        }
        
        //top to down
        if(id == 1) {
            for(int i = top; i<=down; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;
        }
        
        //right to left
        if(id == 2) {
            for(int i = right; i>=left; i--) {
                result.push_back(matrix[down][i]);
            }
            down--;
        }
        
        //down to top
        if(id == 3) {
            for(int i = down; i>=top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
        
        id = (id+1)%4;
    }
    return result;
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

    vector<int> ans = spiralOrder(matrix);

    cout << "== Spiral matrix look like ==" << endl ;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}