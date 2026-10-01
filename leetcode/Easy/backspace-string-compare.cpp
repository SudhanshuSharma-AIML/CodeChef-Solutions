// Problem: Backspace String Compare
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/backspace-string-compare/
// Solved on: 2026-10-01T08:31:30.842Z

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1,s2;
        for(char c:s){
            if(c=='#'){
                if(!s1.empty()){
                    s1.pop();
                }
            }
            else{
                s1.push(c);
            }
        }
        for(char c:t){
            if(c=='#'){
                if(!s2.empty()){
                    s2.pop();
                }
            }
            else{
                s2.push(c);
            }
        }
        return s1==s2;
    }
};