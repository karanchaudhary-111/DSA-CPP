#include<bits/stdc++.h>
using namespace std;

int singleNum(vector<int>& nums){
    int n = nums.size();

    int ans = 0;

    for(auto& it: nums){
        ans = ans^it;
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

    cout << singleNum(arr) << endl;

}