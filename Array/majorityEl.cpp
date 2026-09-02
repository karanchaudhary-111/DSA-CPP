#include<bits/stdc++.h>
using namespace std;

int majorityEl(vector<int> &nums){
    int n = nums.size();

    int candidate = 0;
    int voting = 0;

    for(auto& it: nums){
        if(voting == 0){
            candidate = it;
        }

        if(candidate == it){
            voting++;
        }else{
            voting--;
        }
    }

    return candidate;
}

int main() {
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << majorityEl(arr) << endl;
}