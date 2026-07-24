class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<=1) return s;
        string lcs = "";
        for(int i=1;i<n;i++){
            int low = i;
            int high = i;

         //Odd length check 
        while(low>=0 && high<=n-1 &&s[low] == s[high]){
            low--;
            high++;

            if(low == -1 || high == s.size()){
                break;
            }
        }
        string palindrome = s.substr(low+1,high-low-1);

        if(palindrome.size() > lcs.size()){
            lcs = palindrome;
        }

        low = i-1;
        high = i;

        //Even length check
        while(low>=0 && high<=n-1 && s[low] == s[high]){
            low--;
            high++;

            if(low == -1 || high == s.size()){
                break;
            }
        }

        palindrome = s.substr(low+1,high-low-1);

        if(palindrome.size() > lcs.size()){
            lcs = palindrome;
        }
        }
        return lcs;
    }
};