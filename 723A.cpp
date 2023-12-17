#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;

    int d1=abs(x2-x1)+abs(x3-x1);
    int d2=abs(x1-x2)+abs(x3-x2);
    int d3=abs(x1-x3)+abs(x2-x3);

    int minDistance=min({d1,d2,d3});

    cout << minDistance;
}
