#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int> &nums){
    int n = nums.size();

    int missingSum = (n * (n+1))/2;

    for(auto& it: nums){
        missingSum -= it;
    }

    return missingSum;
    
}

int main() {

    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << findMissingNumber(arr) << endl;

}