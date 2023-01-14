#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/CGL_5_A"
#include <bits/stdc++.h>
using namespace std;
#include "../../geometry/2dPointSet.hpp"

int main() {
    int n;
    cin>>n;
    Polygon ps(n);
    for(int i=0;i<n;++i) {
        cin>>ps[i];
    }
    cout<<fixed<<setprecision(20)<<closest_pair(ps)<<'\n';
    return 0;
}