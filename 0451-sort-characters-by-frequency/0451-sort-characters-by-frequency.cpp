class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        vector<vector<char>> t(s.size() + 1);

        for (auto it : mp) {
            t[it.second].push_back(it.first);
        }

        string k;

        for (int i = s.size(); i >= 1; i--) {
            for (char ch : t[i]) {
                k.append(i, ch);
            }
        }

        return k;
    }
};