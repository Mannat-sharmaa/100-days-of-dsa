class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int count = 0;
        int maxi= 0;
        // if(nums.size()==0&&nums[0]==0){
        //     return 0;
        // }
        // else if(nums.size()==1){
        //     return 1;
        // }
        for(int i= 0;i<nums.size();i++){
               
            if(nums[i]==1){
                count++;
            }
            else{
             count = 0;
            }
            maxi=max(count,maxi);
            
        }
   return maxi;
    }
};