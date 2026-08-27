#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> & nums){
    int n = nums.size();

    int leftSum  = 0;
    int rightSum = 0;

    for(auto& it: nums){
        rightSum += it;
    }

    for(int i = 0; i < n; i++){
        rightSum -= nums[i];

        if(i-1 >= 0){
            leftSum += nums[i-1];
        }

        if(leftSum == rightSum) return i;
    }

    return -1;
}


int main() {
    int n ;
    cout << "Enter size: ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << pivotIndex(arr) << endl;
}