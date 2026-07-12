class Solution {
public:
    int singleNumber(vector<int>& nums) {   
        int n = nums.size();
        int count = 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            count=0;
            maxi=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    count+=1;
                }
                maxi= max(maxi,count);
            }
            if(maxi==1) return nums[i];
        }
        return -1;
    }
};