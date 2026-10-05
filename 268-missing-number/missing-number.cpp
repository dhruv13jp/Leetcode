class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int natsum = (n*(n+1))/2;
        int missing = natsum - sum;
        return missing;
    }
};