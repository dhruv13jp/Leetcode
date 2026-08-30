class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int largest = INT_MIN;
        int smallest = INT_MAX;
        for(int i=0;i<n;i++){
            smallest = min(smallest,nums[i]);
        }
        for(int i=0;i<n;i++){
            largest = max(largest,nums[i]);
        }
        int left=0;
        int right=0;
        int lind=0;
        int sind=0;
        for(int i=0;i<n;i++){
            if(nums[i]==smallest){
                lind = i;
            }
            else if(nums[i]==largest){
                sind = i;
            }
        }
        left = min(lind,sind);
        right = max(lind,sind);
        int result = min(right+1,n-left);
        int finalresult = min(result,(left+1)+(n-right));
        return finalresult;
    }
};