class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> exp;
        for(int i=0 ; i<nums.size(); i++){
            if(nums[i]!= val){
                exp.push_back(nums[i]);
            }
        }
        nums.clear();
        nums = exp;

    return exp.size();
    }
};