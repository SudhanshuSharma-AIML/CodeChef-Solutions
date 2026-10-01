// Problem: Baseball Game
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/baseball-game/
// Solved on: 2026-10-01T08:12:30.334Z

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>points;
        for(auto s:operations){
            if(s=="+"){
                int op2=points.top();
                points.pop();
                int op1=points.top();
                points.push(op2);
                points.push(op1+op2);
            }
            else if(s=="D"){
                points.push(2*points.top());
            }
            else if(s=="C"){
                points.pop();
            }
            else{
                points.push(stoi(s));
            }
        }
        int sum=0;
        while(!points.empty()){
            sum+=points.top();
            points.pop();
        }
        return sum;
    }
};