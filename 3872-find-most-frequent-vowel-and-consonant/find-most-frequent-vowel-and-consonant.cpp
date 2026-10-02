class Solution {
public:
    int maxFreqSum(string s) {
        int n = s.size();
        vector<int> hash(125,0);
        for(auto x : s){
            hash[x]++;
        }
        int vowelmax = 0;
        int consmax = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
                vowelmax = max(vowelmax,hash[s[i]]);
            }
            else{
                consmax = max(consmax,hash[s[i]]);
            }
        }
        return vowelmax + consmax;
    }
};