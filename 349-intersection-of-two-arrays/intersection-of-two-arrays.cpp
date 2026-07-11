class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> hash(1001,0);
        vector<int> ans;
        for(auto x:nums1){
            hash[x]=1;
        }   
        for(auto x : nums2){
            if(hash[x]==1){
                ans.push_back(x);
                hash[x]=0;
            }
        }
        return ans;
    }
};