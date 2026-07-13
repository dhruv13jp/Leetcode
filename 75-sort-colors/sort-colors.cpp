class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums2;
        int zcount=0;
        int onecount=0;
        int twocount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zcount+=1;
            }
            else if(nums[i]==1){
                onecount+=1;
            }
            else{
                twocount+=1;
            }
        }
        for(int i=0;i<zcount;i++){
            nums2.push_back(0);
        }
        for(int i=0;i<onecount;i++){
            nums2.push_back(1);
        }
        for(int i=0;i<twocount;i++){
            nums2.push_back(2);
        }
        for(int i=0;i<n;i++){
            nums[i]=nums2[i];
        }
    }
};