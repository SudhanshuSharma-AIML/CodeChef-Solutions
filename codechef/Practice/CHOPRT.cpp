// Problem: CHOPRT
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHOPRT
// Solved on: 2026-09-25T10:47:13.355Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a<b){
	        cout<<"<"<<endl;
	    }
	    else if(a>b){
	        cout<<">"<<endl;
	    }
	    else{
	        cout<<"="<<endl;
	    }
	}

}
