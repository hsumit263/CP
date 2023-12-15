#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int matrix[5][5];
 
    //cout << "Enter elements: ";
 
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> matrix[i][j] ;
        }
    }
 
 
    // finding 1 in the matrix
    int r1,c1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j]==1){
                r1=i;
                c1=j;
            }
        }
    }
 
    int bi=2,bj=2;
    int count=0;
 
    while(r1!=bi or c1!=bj){
 
        if(r1<bi){
            swap(matrix[r1][c1],matrix[r1+1][c1]);
            r1=r1+1;
            count++;
        }
 
        if(r1>bi){
            swap(matrix[r1][c1],matrix[r1-1][c1]);
            r1=r1-1;
            count++;
        }
 
        if(c1<bj){
            swap(matrix[r1][c1],matrix[r1][c1+1]);
            c1++;
            count++;
        }
 
        if(c1>bj){
            swap(matrix[r1][c1],matrix[r1][c1-1]);
            c1--;
            count++;
        }
    }
 
    // cout << endl;
 
    
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
 
    cout << count ;
 
}
