class Solution {
public: 
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        for(auto x : nums){
            st.insert(x);
        }           
        int index = 0;
        for(auto x : st){
            nums[index] = x;
            index++;
        }           
        return index;           
    }   
};      