// Problem: EQREL
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/DSAMONDAY022/problems/EQREL
// Solved on: 2026-09-30T16:31:50.254Z

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum=0;
    long long mn=LLONG_MAX;
    for(int i=0;i<n;i++){
        long long h;
        cin>>h;
        sum+=h;
        mn=min(mn,h);
    }
    cout<<sum-(n*mn);
    return 0;
}