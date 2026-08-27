#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> & nums){
    int n = nums.size();

    int pivot = 0;

    for(int i = 0; i < n-1; i++){
        if(nums[i] > nums[i+1]){
            pivot = i + 1;
        }
    }

    for(int i = 0; i < n-1; i++){
        int idx = (i + pivot) % n;

        if(nums[idx] > nums[idx + 1]){
            return false;
        }
    }
    return true;
}

int main() {
    int n ;
    cout << "Enter size: ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(checkSorted(arr)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}