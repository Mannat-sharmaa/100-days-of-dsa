class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k;
        for(int i =0;i<nums.size()-1;i++){
            k=i+1;
            if(nums[i]==nums[k]){
                return true;
            }

        }
        
    return false;
    }
};