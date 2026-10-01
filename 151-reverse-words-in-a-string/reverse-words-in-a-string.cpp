class Solution {
public:
    string reverseWords(string s) {
       reverse(s.begin(),s.end());
       vector<string> ans;
       stringstream ss(s);
       string word; 
        while(ss>>word){
            reverse(word.begin(),word.end());
            ans.push_back(word);
        }
        string result = "";
        for(int i=0;i<ans.size();i++){
            result = result + ans[i] + " ";
        }
        return result.substr(0,result.size()-1);
    }
};