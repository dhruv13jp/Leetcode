class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n =nums.size();
        map<long long,int> mpp;
        for(auto x:nums){
            mpp[x]+=1;
        }
        for(auto x:mpp){
            if(x.second==1){
                return x.first;
            }
        }
        return -1;
    }
};