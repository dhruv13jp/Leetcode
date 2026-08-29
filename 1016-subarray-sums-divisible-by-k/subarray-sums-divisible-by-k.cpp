class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int sum =0;
        int result=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int remainder = sum%k;
            if(remainder<0){
                remainder+=k;
            }
            if(mpp.find(remainder)!=mpp.end()){
                result+=mpp[remainder];
                
            }
            mpp[remainder]+=1;
        }
        return result;
    }
};