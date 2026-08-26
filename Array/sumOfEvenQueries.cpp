#include<bits/stdc++.h>

using namespace std;

vector<int> sumOfEvenAfterQueries(vector<int> &nums, vector<vector<int>> &  queries){

    int n = nums.size();
    vector<int> ans;

    int sum = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] % 2 == 0){
            sum += nums[i];
        }
    }

    for(int i = 0; i < queries.size(); i++){
        int val =  queries[i][0];
        int idx = queries[i][1];

        if(nums[idx] % 2 == 0){
            sum -= nums[idx];
        }

        nums[idx] += val;

        if(nums[idx] % 2 == 0){
            sum += nums[idx];
        }

        ans.push_back(sum);
    }

    return ans;
}


int main(){
    int n ;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int row;
    cout <<"Enter row of queries: ";
    cin >> row;

    vector<vector<int>>queries(n, vector<int> (2));

    for(int i = 0; i < row; i++){
        for(int j =  0; j < 2; j++){
            cin >> queries[i][j];
        }
    }

    vector<int> ans = sumOfEvenAfterQueries(arr, queries);

    for(int i =  0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}