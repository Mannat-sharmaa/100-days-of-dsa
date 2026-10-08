class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int a = 0;

        for(int j = nums.size(); j > 0; j--) {

            for(auto it : mp) {

                if(it.second == j) {
                    a++;
                    ans.push_back(it.first);
                }

                if(a == k)
                    break;
            }

            if(a == k)
                break;
        }

        return ans;
    }
};