class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0)
            return 0;

        map<int,int> mp;

        // Map me sab numbers store karo
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = i;
        }

        int count = 1;
        int ans = 1;

        auto it = mp.begin();
        int prev = it->first;
        it++;

        while(it != mp.end()){

            if(it->first == prev + 1){
                count++;
            }
            else{
                count = 1;
            }

            ans = max(ans, count);

            prev = it->first;

            it++;
        }

        return ans;
    }
};