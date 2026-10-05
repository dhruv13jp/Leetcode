class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size();
        int n2= nums2.size();
        set<int> st;
        vector<int> ans;
        int check = 0;
        for(int i=0;i<n1;i++){
            check = nums1[i];
            for(int j=0;j<n2;j++){
                if(check == nums2[j]){
                    st.insert(check);
                }
            }
        }
        for(auto x : st){
            ans.push_back(x);
        }
        return ans;
    }
};