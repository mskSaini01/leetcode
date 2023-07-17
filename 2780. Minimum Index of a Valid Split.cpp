class Solution {
public:
    int minimumIndex(vector<int>& ar) {
        int n = ar.size();
        unordered_map<int, int> mp;
        int max_freq = 0;
        int dom = 0, dom_freq = 0;
        for(int i = 0; i < n; i++) {
            mp[ar[i]]++;
            if(mp[ar[i]] > max_freq){
                max_freq = mp[ar[i]];
                dom = ar[i];
                dom_freq = max_freq;
            }
        }
        if(dom_freq * 2 < n)
            return -1;
        
        int l_freq = 0, r_freq = 0;
        for(int i = 0; i < n; i++){
            if(ar[i] == dom)
                l_freq++;
            r_freq = dom_freq - l_freq;
            if(l_freq*2 > i+1 &&  r_freq*2 > n-i-1)
                return i;
        }
        return -1;
    }
};