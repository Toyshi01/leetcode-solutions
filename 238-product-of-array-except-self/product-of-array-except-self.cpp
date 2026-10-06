class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x=1, cnt=0, y=0;
        for(int m=0; m<nums.size(); m++){
            if(nums[m]==0){
                cnt++;
                continue;
            }
            x*= nums[m];
        }
        vector<int> answer(nums.size());
        if(cnt>=1){
            if(cnt>1){
                for(int i=0; i<nums.size(); i++){
                    answer[i]=0;
                }

            }
            else{
                for(int i=0; i<nums.size(); i++){
                    if(nums[i]==0){
                        answer[i]=x;
                        continue;
                    }
                    answer[i]=0;
                }
            }
        }
        else{
        for(int m=0; m<nums.size(); m++){
            answer[m]= x/nums[m];
        }
        }
        return answer;
    }
};