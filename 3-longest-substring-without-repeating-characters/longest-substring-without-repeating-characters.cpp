class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            vector<int> freq(128,0);
            for(int j=i;j<n;j++){
                freq[s[j]]++;
                if(freq[s[j]]>1) break;
                ans = max(ans,j-i+1);
            }
            
        }
        return ans;
    }
};