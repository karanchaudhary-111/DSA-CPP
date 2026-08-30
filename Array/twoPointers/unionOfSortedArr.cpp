#include<bits/stdc++.h>
using namespace std;

vector<int> unionOfSortedArr(vector<int>& nums1, vector<int>& nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();

    int i = 0; int j = 0;

    vector<int> ans;

    while(i < n1 && j < n2){
        if(nums1[i] < nums2[j]){
            if(ans.empty() || ans.back() != nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
        }else if(nums1[i] > nums2[j]){
            if(ans.empty() || ans.back() != nums2[j]){
                ans.push_back(nums2[j]);
            }j++;
        }else{
            ans.push_back(nums1[i]);
            i++; j++;
        }
    }

    while(i < n1 ){
        if(ans.empty() || nums1[i] != ans.back()){
            ans.push_back(nums1[i]);
        }
        i++;
    }

    while(j < n2){
        if(ans.empty() || nums2[j] != ans.back()){
            ans.push_back(nums2[j]);
        }
        j++;
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter size of Array 1: ";
    cin >> n;

    vector<int>arr1(n);
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int m ;
    cout << "Enter size of array 2: ";
    cin >> m;

    vector<int>arr2(m);
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    vector<int> ans = unionOfSortedArr(arr1, arr2);

    for(auto& it:  ans){
        cout << it << " ";
    }
}