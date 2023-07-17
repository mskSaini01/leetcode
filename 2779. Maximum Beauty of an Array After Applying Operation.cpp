class Solution { 
public: 
    int maximumBeauty(vector<int>& ar, int k) { 
        int n = ar.size();
        map<int,int> mp; 
        
        for(int i = 0; i < n; i++) { 
            mp[ar[i]-k]++; 
            mp[ar[i]+k+1]--; 
        } 
        int beauty = 0, res = 0; 
        for(auto x:mp) { 
            beauty += x.second; 
            res = max(res,beauty); 
        } 
        return res; 
    } 
};