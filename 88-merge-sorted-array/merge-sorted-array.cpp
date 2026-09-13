class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int k=0, j=0;
        while(k<n && j<m){
            if(nums2[k]< nums1[j]){
                ans.push_back(nums2[k]);
                k++;
            }
            else if(nums2[k]==nums1[j]){
                ans.push_back(nums2[k]);
                ans.push_back(nums2[k]);
                k++;
                j++;
            }
            else{
                ans.push_back(nums1[j]);
                j++;
            }
        }
        while(k<n){
            ans.push_back(nums2[k]);
            k++;
        }
         while(j<m){
            ans.push_back(nums1[j]);
            j++;
        }
    
    nums1 = ans;
    }
};