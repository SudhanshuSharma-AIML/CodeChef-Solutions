// Problem: CHEAT
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEAT
// Solved on: 2026-09-25T10:33:15.798Z

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if((n%7)>=2){
	        cout<<(n/7)+1<<endl;
	    }
	    else{
	        cout<<n/7<<endl;
	    }
	}

}
