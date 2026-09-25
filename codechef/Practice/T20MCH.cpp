// Problem: T20MCH
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH
// Solved on: 2026-09-25T10:41:20.382Z

#include <bits/stdc++.h>
using namespace std;

int main() {
     int r,o,c;
     cin>>r>>o>>c;
     int rover=20-o;
     int run=(rover*6*6)+c;
     if(run>r){
         cout<<"YES";
     }
     else{
         cout<<"NO";
     }

}
