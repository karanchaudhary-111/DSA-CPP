#include<bits/stdc++.h>

using namespace std;

void sortColor(vector<int> &nums){
    int n = nums.size();

    int s   = 0;
    int mid = 0;
    int end = n-1;

    while(mid <= end){
        if(nums[mid] == 0){
            swap(nums[s], nums[mid]);
            mid++;
            s++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[mid], nums[end]);
            end--;
        }
    }

}

int main(){
    int n ;
    cout << "Enter size: ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sortColor(arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}