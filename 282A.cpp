// Problem 282A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,X=0;
    //cout << "Enter the number of inputs: ";
    cin>> n;

    vector<string> exp;

    int j=0;

    while(j<n){

        string arr;
        //cout << "Enter the expression: ";
        cin >> arr;

        exp.push_back(arr);
        j++; 
    }

    int i,k;
    for(i=0;i<n;i++){

        if(exp[i]=="X++" or exp[i]=="++X") X++;
        else if ( exp[i]=="X--" or exp[i]=="--X") X--;
       

    }

    cout << X;
    // return X;
    
}
