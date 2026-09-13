#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSequesnce(vector<int> & nums){
    int n = nums.size();

    unordered_set<int> st;
    int maxCnt = 1;

    for(int & it: nums){
        st.insert(it);
    }

    for(int &it : nums){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;

            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt++;
            }
            maxCnt =  max(maxCnt, cnt);
        }
    }

    return maxCnt;
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