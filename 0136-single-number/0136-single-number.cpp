class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int Xorr = 0;
        for(int i = 0 ; i< nums.size(); i++){
            Xorr = Xorr^nums[i];
        }
return Xorr;
        }

};
// unordered_map<int,int> mp
// for( int i = 0; i< nums.size();i++){
//     mp[nums[i]]++
// } 
// for( int ch : mp ){
//     if(ch.second == 1){
//         return ch.first;
//     }
// }