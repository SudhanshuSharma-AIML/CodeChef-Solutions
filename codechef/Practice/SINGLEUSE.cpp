// Problem: SINGLEUSE
// Platform: codechef
// Language: #include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,x,y;
	    cin>>h>>x>>y;
	    if(h<=y){
	        cout<<"1"<<endl;
	    }
	    else if((x+y)>=h){
	        cout<<"2"<<endl;
	    }
	    else{
	       cout<<((h-y)/x)<<endl;
	    }
	    
	}

}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE?tab=Help
// Solved on: 2026-09-29T16:57:45.122Z

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,x,y;
	    cin>>h>>x>>y;
	    if(h<=y){
	        cout<<"1"<<endl;
	    }
	    else if((x+y)>=h){
	        cout<<"2"<<endl;
	    }
	    else{
	       cout<<((h-y)/x)<<endl;
	    }
	    
	}

}
