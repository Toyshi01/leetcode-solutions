class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int large =candies[0];
        for(int i=0; i<candies.size(); i++){
            if(candies[i]>large){
                large = candies[i];
            }
        }
        vector <bool> a(candies.size());
        for(int i =0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= large){
                a[i]=true;
            }
            else{
                a[i]= false;
            }
        }
        return a;
    }
};