class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Count frequency
        unordered_map<int, int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        // Step 2: Bucket
        vector<vector<int>> bucket(nums.size() + 1);

        for(auto it : mp) {
            bucket[it.second].push_back(it.first);
        }

        // Step 3: Traverse from highest frequency
        vector<int> ans;

        for(int i = nums.size(); i >= 1; i--) {

            for(int x : bucket[i]) {
                ans.push_back(x);

                if(ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};
// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;
//         vector<int> ans;

//         for(int i = 0; i < nums.size(); i++) {
//             mp[nums[i]]++;
//         }

//         int a = 0;

//         for(int j = nums.size(); j > 0; j--) {

//             for(auto it : mp) {

//                 if(it.second == j) {
//                     a++;
//                     ans.push_back(it.first);
//                 }

//                 if(a == k)
//                     break;
//             }

//             if(a == k)
//                 break;
//         }

//         return ans;
//     }
// };