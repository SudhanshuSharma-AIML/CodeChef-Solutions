// Problem: SINGLEUSE
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE?tab=statement
// Solved on: 2026-09-29T17:04:12.689Z

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,x,y;
	    cin>>h>>x>>y;
	    int v=ceil((double)(h-y)/x);
	    if(h<=y){
	        cout<<"1"<<endl;
	    }
	    else if((x+y)>=h){
	        cout<<"2"<<endl;
	    }
	    else{
	       cout<<v+1<<endl;
	    }
	    
	}

}
