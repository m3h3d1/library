#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/CGL_1_B"
#include <bits/stdc++.h>
using namespace std;
#include "../../geometry/2dPointAndVector.hpp"

int main() {
    Point p1, p2;
    cin>>p1>>p2;
    Line l = Line(p1, p2);

    int q;
    cin>>q;
    while(q--) {
        Point p;
        cin>>p;
        cout<<reflection(l, p)<<'\n';
    }
    return 0;
}