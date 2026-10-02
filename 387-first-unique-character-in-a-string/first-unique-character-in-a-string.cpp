class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        vector<int> hash(125,0);
        for(auto x : s){
            hash[x]++;
        }
        for(int i=0;i<n;i++){
            if(hash[s[i]]==1) return i;
        }
        return -1;
    }
};