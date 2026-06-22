class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        for(int i= 0 ; i<nums1.size();i++){
            merge.push_back(nums1[i]);
        }
         for(int j= 0 ; j<nums2.size();j++){
            merge.push_back(nums2[j]);
        }
        sort(merge.begin(),merge.end());
        int n= merge.size();
        if(n%2==0){
            int a=n/2;
            int sum = merge[a-1]+merge[a];
            double ans= sum/2.0;
             return ans;
        }
        else{
            int a=n/2;
          double  ans = merge[a];
           return ans;
        }

      
        

    }
};