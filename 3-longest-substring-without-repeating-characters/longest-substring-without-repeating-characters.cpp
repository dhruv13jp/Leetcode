class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        unordered_set<char> st;
        int low = 0;
        int high = 0;
        while(high<n){
            while(st.count(s[high])){
                st.erase(s[low]);
                low++;
            }
            st.insert(s[high]);
            ans = max(ans,high-low+1);
            high++;
        }
        return ans;
    }
};