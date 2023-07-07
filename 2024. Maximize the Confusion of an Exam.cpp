class Solution {
public:
    int maxConsecutiveAnswers(string str, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int left = 0, right = 0, count = 0;
        int n = str.length();
        int res = 0;
        while (right < n) {
            if (str[right] == 'F')
                count++;
            while(count > k){
                if(str[left++] == 'F'){
                    count--;
                    break;
                }
            }
            res = max(res, right-left+1);
            right++;
        }
        right--;
        res = max(res, right-left+1);

        left = 0;
        right = 0;
        count = 0;
        while (right < n) {
            if (str[right] == 'T')
                count++;
            while(count > k){
                if(str[left++] == 'T'){
                    count--;
                    break;
                }
            }
            res = max(res, right-left+1);
            right++;
        }
        right--;
        res = max(res, right-left+1);
        return res;
    }
};