class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        if(n==0) return 0;
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        s = s.substr(i);
        i=0;
        if(s.empty()) return 0;
        int sign = +1;
        long ans =0;
        if(s[0]=='-') sign = -1;
        i = (s[i]=='+' || s[i]=='-') ? 1:0;
        int Max = INT_MAX;
        int Min = INT_MIN;
        while(i < s.length()){
            if(!isdigit(s[i])) break;
            ans = ans*10 + (s[i]-'0');
            if(sign ==-1 && -1*ans<Min) return Min;
            if(sign == 1 && ans>Max) return Max;

            i++;
        }
        return sign*ans;

    }
};