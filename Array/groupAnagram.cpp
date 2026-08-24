#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string generate(string &s)
    {
        int count[26] = {0};

        for (char &ch : s)
        {
            count[ch - 'a']++;
        }

        string new_s;

        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 0)
            {
                new_s += string(count[i], i + 'a');
            }
        }

        return new_s;
    }

    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mp;

        for (string &s : strs)
        {
            string new_s = generate(s);

            mp[new_s].push_back(s);
        }

        vector<vector<string>> result;

        for (auto &it : mp)
        {
            result.push_back(it.second);
        }

        return result;
    }
};

int main()
{
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter strings:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }

    Solution obj;

    vector<vector<string>> result = obj.groupAnagrams(strs);

    cout << "\nGrouped Anagrams:" << endl;

    for (const auto &group : result)
    {
        cout << "[ ";

        for (const string &word : group)
        {
            cout << word << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}

