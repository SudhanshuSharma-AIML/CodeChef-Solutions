// Problem: Daily Temperatures
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/daily-temperatures/
// Solved on: 2026-10-01T09:00:26.283Z

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int t=st.top();
                st.pop();
                ans[t]=i-t;
            }
            st.push(i);
        }
        return ans;
    }
};