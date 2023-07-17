class Solution {
public:
    int longestValidSubstring(string word, vector<string>& forbidden) {
        int res = 0, max_len = 0;
        unordered_set<string> st;
        for(auto s: forbidden) {
            st.insert(s);
            max_len = max(max_len, (int)s.length());
        }
        
        int l = 0, r = 0, n = word.length();
        
        while(r < n) {
            string temp;
            for(int i = r; (i>=l)&&(i>r-max_len); i--) {
                temp = word[i] + temp;
                if(st.count(temp)) {
                    l = i+1;
                    break;
                }
            }
            r++;
            res = max(res, r-l);
        }
        return res;
    }
};