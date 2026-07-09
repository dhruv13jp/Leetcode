    int lowerBound(vector<int> &nums, int x){
     int n = nums.size();
     int low = 0;
     int high = n-1;
     int ans = n;
     while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]>=x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
     }
     return ans;
    }

    int upperBound(vector<int> &nums, int x){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = n;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>x){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;   
    }




class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1;
        int last = -1;
        int lb=lowerBound(nums,target);
        if(lb==n || nums[lb]!=target) return {-1,-1};
        else return {lb,upperBound(nums,target)-1};
    }
};