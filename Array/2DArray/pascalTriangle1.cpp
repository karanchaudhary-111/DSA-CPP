#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pasacalTri(int n){
    vector<vector<int>> ans;

    for(int i = 0; i < n; i++){
        vector<int> temp(i+1, 1);

        for(int j = 1; j < temp.size()-1; j++){
            temp[j] = ans[i-1][j-1] + ans[i-1][j];
        }
        ans.push_back(temp);
    }
    return ans;
}

int main() {
    
    int n;
    cout << "Enter the numROW: ";
    cin >> n;

    vector<vector<int>> ans = pasacalTri(n);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < i+1; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}