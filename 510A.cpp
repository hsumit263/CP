#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;

    cin >> n >> m;

    int n1=1;
    int n2=1;

    for(int i=0;i<n;i++){

        if(4*n1-3==i){
            for(int j=0;j<m-1;j++) cout << ".";
            cout << "#" << endl;
            n1++;
        }

        else if(4*n2-1==i){
            cout << "#";

            for(int j=0;j<m-1;j++) cout << ".";

            cout << endl;

            n2++;
        }

        else{
            for(int j=0;j<m;j++) cout << "#";
            cout << endl;
        }


    }
}
