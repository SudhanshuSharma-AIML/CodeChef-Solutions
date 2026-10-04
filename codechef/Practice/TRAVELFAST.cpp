// Problem: TRAVELFAST
// Platform: codechef
// Language: #include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	int x,y;
	cin>>x;
	if(x>y){
	    cout<<"CAR"<<endl;
	}
	else if(x<y){
	    cout<<"BIKE"<<endl;
	}
	else{
	    cout<<"SAME"<<endl;}
	}
}
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST?tab=Help
// Solved on: 2026-10-04T16:33:20.602Z

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	int x,y;
	cin>>x>>y;
	if(x>y){
	    cout<<"CAR"<<endl;
	}
	else if(x<y){
	    cout<<"BIKE"<<endl;
	}
	else{
	    cout<<"SAME"<<endl;}
	}
}
