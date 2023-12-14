#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    //cout << "Enter the number: ";
    cin >> n;
 
    vector<long long> digits;
 
    while(n!=0){
        long long r=n%10;
        digits.push_back(r);
        n=n/10;
    }
 
    if(digits[digits.size()-1]==9){
         for(int i=0;i<digits.size()-1;i++){
        
        if(digits[i]>=5){
            digits[i]=9-digits[i];
        }
    }
    }
 
    else{
        for(int i=0;i<digits.size();i++){
        
        if(digits[i]>=5){
            digits[i]=9-digits[i];
        }
    }
    }
 

    long long  newNum=0;
    for(int i=0;i<digits.size();i++){
        newNum=newNum+(pow(10,i))*digits[i];
    }
 
    cout << newNum;
    
}
