class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {

        unordered_map<int, int> mp;
        int count = 0;

        // nums1 + nums2
        for(int i : nums1) {
            for(int j : nums2) {
                mp[i + j]++;
            }
        }

        // nums3 + nums4
        for(int k : nums3) {
            for(int l : nums4) {

                int sum = k + l;

                if(mp.count(-sum)) {
                    count += mp[-sum];
                }
            }
        }

        return count;
    }
};