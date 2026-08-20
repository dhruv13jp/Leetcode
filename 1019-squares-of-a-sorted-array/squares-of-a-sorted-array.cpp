class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int digit = nums[i]*nums[i];
            ans.push_back(digit);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};