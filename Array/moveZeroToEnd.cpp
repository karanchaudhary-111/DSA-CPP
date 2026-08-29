#include<bits/stdc++.h>
using namespace std;

void moveZeroToEnd(vector<int>& nums){
    int n = nums.size();

    int idx = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] != 0){
            nums[idx++] = nums[i];
        }
    }

    for(int i = idx; i < n; i++){
        nums[i] = 0;
    }
}

int main() {
    int n ;
    cout << "Enter size: ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    moveZeroToEnd(arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}