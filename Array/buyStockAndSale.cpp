#include<bits/stdc++.h>
using namespace std;

int buyStockAndSale(vector<int>& nums){
    int n = nums.size();

    int mini = nums[0];
    int profit = 0;

    for(auto& it :  nums){
        mini = min(mini, it);
        profit = max(profit, it - mini);
    }
    return profit;
}

int main() {
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << buyStockAndSale(arr) << endl;
}