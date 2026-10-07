// Problem: BSEX02
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/DSAMONDAY023/problems/BSEX02
// Solved on: 2026-10-07T16:32:46.813Z

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int layer=0;
        while(sum+layer+1<=n){
            layer++;
            sum+=layer;
        }
        cout<<layer<<endl;
    }
    return 0;
}