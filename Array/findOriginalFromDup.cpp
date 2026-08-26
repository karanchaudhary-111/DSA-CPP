#include<bits/stdc++.h>

using namespace std;

vector<int> findOriginal(vector<int> &nums){
    int n = nums.size();

    unordered_map<int, int> mp;
    if(n % 2 != 0) return {};

    sort(nums.begin(), nums.end());

    for(auto & it : nums){
        mp[it]++;
    }

    vector<int> ans;

    for(auto & it: nums){
        if(mp[it] == 0) continue;

        if(mp.find(2*it) == mp.end() || mp[2*it] == 0){
            return {};
        }
        ans.push_back(it);
        mp[it]--;
        mp[2*it]--;
    }

    return ans;
}

int main(){
    int n ;
    cout << "Enter size: ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> ans = findOriginal(arr);

    for(int i =  0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}