#include<bits/stdc++.h>
using namespace std;

vector<int> leaderInArr(vector<int>&nums){
    int n = nums.size();
    vector<int> ans;

    for(int i = n-1; i >= 0;i--){
        if(ans.empty() || ans.back() < nums[i]){
            ans.push_back(nums[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> ans = leaderInArr(arr);

    for(auto& it :  ans){
        cout << it << " ";
    }
}