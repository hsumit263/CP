#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int n1,n2,n3;

    n1=(k*l)/nl;
    n2=(c*d);
    n3=p/np;

    //cout << n1 << n2 << n3 << endl;

    int minToast=min({n1,n2,n3});

    int toastForEach=minToast/n;

    cout << toastForEach;
}
