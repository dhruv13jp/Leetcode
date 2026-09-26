class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n = s.length();
        map<char,int> mpp;
        for(auto x : s){
            mpp[x]++;
        }
        vector<int> freq;
        for(auto &x : mpp){
            freq.push_back(x.second);
        }
        for(int i=1;i<freq.size();i++){
            if(freq[i]!=freq[i-1]) return false;
        }
        return true;
    }
};