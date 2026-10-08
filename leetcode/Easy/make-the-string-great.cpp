// Problem: Make The String Great
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/make-the-string-great/
// Solved on: 2026-10-08T08:15:45.144Z

class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(char c:s){
            if(!st.empty()&&st.top()!=c&&tolower(st.top())==tolower(c)){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};