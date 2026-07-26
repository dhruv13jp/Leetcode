class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        if(n==1) return;
        k = k%n;
        for(int i=n-k;i<n;i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++){
            ans.push_back(nums[i]);
        }
        nums.clear();
        for(int i=0;i<n;i++){
            nums.push_back(ans[i]);
        }
    }
};