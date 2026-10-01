// Problem: AVGPROBLEM
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
// Solved on: 2026-10-01T14:35:33.938Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
	while(x--){
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
