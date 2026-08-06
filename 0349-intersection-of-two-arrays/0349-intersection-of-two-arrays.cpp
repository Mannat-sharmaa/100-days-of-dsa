// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int,vector<int>> mp;
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());

// nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
// nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
//         for(int i = 0;i<nums1.size();i++){
//             mp[nums1[i]].push_back(i);
            
//         }
//           for(int i = 0;i<nums2.size();i++){
//             mp[nums2[i]].push_back(i);
            
//         }
//         vector<int> ans;
//         for(auto x : mp){
//             if(x.second.size()==2){
//                 ans.push_back(x.first);
//             }
//         }
//     return ans;}
// };
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> st;
        vector<int> ans;

        // nums1 ke saare unique elements set me daal do
        for(int x : nums1){
            st.insert(x);
        }

        // nums2 ko check karo
        for(int x : nums2){

            if(st.count(x)){
                ans.push_back(x);

                // Dubara add na ho isliye remove kar do
                st.erase(x);
            }
        }

        return ans;
    }
};