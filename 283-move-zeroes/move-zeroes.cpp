class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=1;
        int j=0;
        while(i<n){
            if(nums[j]==0 && nums[i]!=0){
                swap(nums[j],nums[i]);
            }
            else if(nums[i]==0 && nums[j]==0){
                i++;
            }
            else{
                i++;
                j++;
            }
        }
    }
};