class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        vector<int> freq(256,0);
        for(auto x : s){
            freq[x]+=1;
        }
        auto cmp = [&](char a,char b){
            if(freq[a] == freq[b]) return a < b;
            return freq[a] > freq[b]; 
        };
        sort(s.begin(),s.end(),cmp);
        return s;
    }
};