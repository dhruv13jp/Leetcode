class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        for(auto x:mpp){
            if(x.second > (n/2)) return x.first;
        }
        return -1;
    }
};