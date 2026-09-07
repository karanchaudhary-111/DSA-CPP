#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSequesnce(vector<int> & nums){
    int n = nums.size();
}

int main() {
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << longestConsecutiveSequesnce(arr) << endl;


}