#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> &nums){
    int n = nums.size();

    int ans = 0;

    int i = 0;
    while(i < n){
        int j = i;

        while(j < n && nums[j] == 1){
            j++;
        }
        ans = max(ans, j - i);
        i = j + 1;
    }
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

    int ans = maxConsecutiveOnes(arr);
    cout << ans << " ";
}