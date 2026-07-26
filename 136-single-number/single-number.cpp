class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto x : nums){
            mpp[x] ++;
        }
        for(auto x : nums){
            if(mpp[x]==1) return x;
        }
        return -1;
    }
};