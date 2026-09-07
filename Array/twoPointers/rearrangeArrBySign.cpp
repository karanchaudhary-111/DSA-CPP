#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArrBySign(vector<int> &nums){
    int n =  nums.size();

    int pos = 0;
    int neg = 1;
    vector<int> ans(n);

    for(auto& it : nums){
        if(it > 0){
            ans[pos] = it;
            pos += 2;
        }else{
            ans[neg] = it;
            neg += 2;
        }
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

    vector<int> ans = rearrangeArrBySign(arr);

    for(auto& it :  ans){
        cout << it << " ";
    }
}