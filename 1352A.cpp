#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
 
    vector<int> tCase(t);
 
    // stores the input
    for(int i=0;i<t;i++){
        int n;
 
        cin >> n;
 
        tCase[i]+=n;
    }
 
    // for(int i=0;i<t;i++){
    //     cout << tCase[i] << " ";
    // }
 
    for(int i=0;i<t;i++){
        int n=tCase[i];
        int k=0;
        int count=0;
        vector<int> round;
 
        while(n!=0){
            // cout << " k " << k;
 
            int r=n%10;
            if(r!=0){
                int j=r*pow(10,k);
                round.push_back(j);
                count++;
                // cout << "val : "<< r*pow(10,k);
                // cout << "rem: " << r;
            }
            n=n/10;
            k++;
 
        }
 
 
        cout << count << endl;
 
        for(auto i:round){
            cout<< i << " ";
        }
 
        cout << endl;
    }
 
 
}
 
