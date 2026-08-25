#include<bits/stdc++.h>

using namespace std;

int missingMultiple(vector<int>& nums, int k) {
    int n = nums.size();

    vector<int> vec(101, 0);

    for(int i = 0; i < n; i++){
        vec[nums[i]]++;
    }

    int i = 1;

    while( k*i <= 100 &&  vec[k*i] != 0){
        i++;
    }

    return k*i;
}

int main(){
    int n ;
    cout << "Enter size: ";
    cin >> n;

    int k;
    cout << "Enter the k value: ";
    cin >> k;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << missingMultiple(arr, k);
}