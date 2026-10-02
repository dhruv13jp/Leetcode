class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.size();
        vector<int> hash(125,0);
        char ans = ' ';
        for(auto x : s){
            hash[x]++;
            if(hash[x]==2) return x;
        }
        
        return ans;
    }
};