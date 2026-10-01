// Problem: Greater Average
// Platform: codechef
// Contest: 500
// Rating/Difficulty: 500
// Language: C++17
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
// Solved on: 2026-10-01T14:38:28.747Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float a,b,c;
	    cin>>a>>b>>c;
	    if((a+b)/2>c){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}

}
