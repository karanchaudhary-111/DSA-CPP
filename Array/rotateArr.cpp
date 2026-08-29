#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArr(vector<int> nums, int k){
    int n = nums.size();
    int idx = 0;

    vector<int> temp;
    k = k % n;

    for(int i = 0; i < n; i++){
        if(i < n-k){
            temp.push_back(nums[i]);
        }else{
            nums[idx++] = nums[i];
        }
    }

    for(auto & it: temp){
        nums[idx++] = it;
    }

    return nums;

}

int main() {
    int n ;
    cout << "Enter size: ";
    cin >> n;

    int k;
    cout << "Enter the number of rotation: ";
    cin >> k;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }



    vector<int> ans = rotateArr(arr, k);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

}