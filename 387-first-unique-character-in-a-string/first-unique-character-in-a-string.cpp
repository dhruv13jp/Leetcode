class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        vector<int> hash(125,0);
        for(int i=0;i<n;i++){
            int digit = (int)s[i];
            hash[digit]++;
        }
        for(int i=0;i<n;i++){
            int digit = (int)s[i];
            if(hash[digit]==1) return i;
        }
        return -1;
    }
};