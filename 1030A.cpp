#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int numberOfPeople;

    cin >> numberOfPeople;

    int check=0;

    int resp;

    for(int i=0;i<numberOfPeople;i++){

        cin >> resp;

        if(resp==0) continue;

        else if(resp==1) check=1;
    }

    if(!check) cout << "EASY";

    else cout << "HARD";
}
