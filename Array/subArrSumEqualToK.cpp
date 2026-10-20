#include<bits/stdc++.h>
using namespace std;

int subArrSumEqlToK(vector<int>& nums, int k){
    int n = nums.size();

    unordered_map<int, int> mp;
    mp[0] = 1;

    int prefixSum = 0;
    int cnt = 0;

    for(int& x: nums){
        prefixSum += x;
        int remain = prefixSum - k;

        if(mp.find(remain) != mp.end()){
            cnt += mp[remain];
        }
        mp[prefixSum] += 1;
    }
    return cnt;
}

int main() {
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the target: ";
    cin >> k;

    cout << subArrSumEqlToK(arr, k);
}