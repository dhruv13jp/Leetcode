class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixsum(n,0);
        int count =0;
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixsum[i] = prefixsum[i-1] + nums[i];
        }
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            if(prefixsum[i]==k) count++;
            int val = prefixsum[i]-k;
            if(mpp.find(val)!=mpp.end()){
                count+=mpp[val];
            }
            if(mpp.find(prefixsum[i])==mpp.end()){
                mpp[prefixsum[i]]=0;
            }
            mpp[prefixsum[i]]++;
        }
        return count;
    }
};