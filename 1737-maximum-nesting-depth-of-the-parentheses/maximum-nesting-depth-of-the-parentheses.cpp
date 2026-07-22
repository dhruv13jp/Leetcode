class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int opencnt=0;
        int maxcnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                opencnt++;
                maxcnt = max(opencnt,maxcnt);
            }
            else if(s[i]==')'){
                opencnt--;
            }
        }
        return maxcnt;
    }
};