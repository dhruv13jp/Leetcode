class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int wsum = n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int result = wsum-sum;
        return result;
    }
};