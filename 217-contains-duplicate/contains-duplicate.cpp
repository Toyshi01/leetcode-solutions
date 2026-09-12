class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return false;
        }
        
    unordered_map<int, int> hashh;
        for(int i=0; i<nums.size(); i++){
            hashh[nums[i]]++;
            if(hashh[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};