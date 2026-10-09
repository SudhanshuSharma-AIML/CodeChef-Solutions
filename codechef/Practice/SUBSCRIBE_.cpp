// Problem: SUBSCRIBE_
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_
// Solved on: 2026-10-09T17:06:10.247Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n%6==0){
	        cout<<(n/6)*x<<endl;
	    }
	    else if(n%6>0){
	        cout<<x+(n/6)*x<<endl;
	    }
	   
	   
	   
	}

}
