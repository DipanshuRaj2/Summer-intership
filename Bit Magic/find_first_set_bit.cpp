/*
Given an integer N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
Note: If there is no set bit in the integer N, then return 0 from the function.  

Example 1:
Input: N = 18
Output: 2
Explanation: Binary representation of 
18 is 010010,the first set bit from the 
right side is at position 2.

Exapmle 2:
Input: N = 12 
Output: 3 
Explanation: Binary representation 
of  12 is 1100, the first set bit 
from the right side is at position 3.

Time complexity of O(log n); 
*/
#include<bits/stdc++.h>
using namespace std;

int first_set_bit(int n){
    
    // if(n == 0) return 0;

    // int a = -n;

    // int b = a & n;

    // return log2(b)+1;  

    int count = 1;
    while(n > 0){
        if(n & 1) return count;

        count ++;

        n= n >> 1; // right shift divide by 2 (n = n/2);
    }
    return 0;


}
int main(){

    int n ;

    cin >> n;

    cout <<"The first set bit is " <<first_set_bit(n);
}