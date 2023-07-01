// Given a rope of length N meters, and the rope can be cut in only 3 sizes A, B and C. The task is to maximizes the number of cuts in rope. If it is impossible to make cut then print the number else print -1. Examples:

// Input: 

// N = 17, A = 10, B = 11, C = 3 

// Output: 3 

// Explanation: The maximum cut can be obtain after making 2 cut of length 3 and one cut of length 11. 

// Input: N = 10, A = 9, B = 7, C = 11 

// Output: -1 

// Explanation: It is impossible to make any cut so output will be -1.


#include<bits/stdc++.h>
using namespace std;
int maxPieces(int n , int a , int b , int c){
    if(n == 0) return 0;

    else if(n < 0) return -1;

    int pieces = 0;

    int temp1 = maxPieces(n-a ,a, b , c);

    int temp2 = maxPieces(n-b ,a, b , c);

    int temp3 = maxPieces(n-c ,a, b , c);

    pieces = max({temp1, temp2,temp3} );

    if (pieces ==-1) return -1;

    return pieces+1;

}
int main(){
    int n = 9, a = 2 , b = 2, c = 2;

    cout <<maxPieces(n, a, b , c);
}
//time complexity = O(3^n);

//it is optimised by the dynamic programming;