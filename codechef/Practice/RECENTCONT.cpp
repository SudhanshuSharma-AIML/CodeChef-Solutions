// Problem: RECENTCONT
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT
// Solved on: 2026-09-29T17:27:48.521Z

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string arr[n];
	    int count=0;
	    int counts=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(auto x:arr){
	        if(x=="START38"){
	            count++;
	        }
	        else{
	            counts++;
	        }
	    }
	    cout<<count<<" "<<counts<<endl;
	}

}
