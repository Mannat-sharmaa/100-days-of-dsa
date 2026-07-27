class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> ans;

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int j = 1;

        for (int i = 0; i < n; i++) {

            if (nums[i] < j)
                continue;

            while (j < nums[i]) {
                ans.push_back(j);
                j++;
            }

            if (nums[i] == j)
                j++;
        }

        while (j <= n) {
            ans.push_back(j);
            j++;
        }

        return ans;
    }
};