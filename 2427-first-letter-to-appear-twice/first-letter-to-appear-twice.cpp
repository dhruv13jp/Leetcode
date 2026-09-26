class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.length();
        char result = ' ';
        vector<int> hash(125,0);
        for(int i=0;i<n;i++){
           int digit = (int)s[i];
           hash[digit]++; 
           if(hash[digit]==2){
            return s[i];
           }
        }
        
        
        return result;
    }
};