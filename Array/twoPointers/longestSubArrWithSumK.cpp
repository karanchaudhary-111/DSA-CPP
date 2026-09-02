#include<bits/stdc++.h>
using namespace std;

int longestSubArrWithSumK(vector<int> & nums, int k){
    int n  = nums.size();

    int i   = 0;
    int sum = 0;
    int ans = 0;

    for(int j = 0; j < n; j++){
        sum += nums[j];

        if(sum == k){
            ans = max(ans, j - i + 1);
        }

        while(sum > k){
            sum -= nums[i];
            i++;
        }

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

    int k;
    cout << "Enter the target: ";
    cin >> k;

    cout << longestSubArrWithSumK(arr, k) << endl;

}