class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        vector<int> candidates;
        for (int i = 0; i < n-1; i++)
            candidates.push_back(weights[i] + weights[i+1]);
        
        sort(candidates.begin(), candidates.end());
        long long min_sum = 0, max_sum = 0;
        for (int i = 0; i < k-1; i++){
            min_sum += candidates[i];
            max_sum += candidates[n-2-i];
        }
        return max_sum - min_sum;

        // // Using Priority Queue
        // priority_queue<int> pq1;
        // priority_queue<int, vector<int>, greater<int>> pq2;
        // k--;
        // for (int i = 0; i < weights.size() - 1; i++) {
        //     pq1.push(weights[i] + weights[i + 1]);
        //     pq2.push(weights[i] + weights[i + 1]);
        //     if (pq1.size() > k ) {
        //         pq1.pop();
        //         pq2.pop();
        //     }
        // }
        // long long ans1 = 0, ans2 = 0;
        // while (!pq1.empty()) {
        //     ans1 += pq1.top();
        //     ans2 += pq2.top();
        //     pq1.pop();
        //     pq2.pop();
        // }
        // return ans2 - ans1;
    }
};