/*You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

Example 1:

Input: N = 4
Output: 5
Explanation:
For numbers from 1 to 4.
For 1: 0 0 1 = 1 set bits
For 2: 0 1 0 = 1 set bits
For 3: 0 1 1 = 2 set bits
For 4: 1 0 0 = 1 set bits
Therefore, the total set bits is 5.

*/
#include<bits/stdc++.h>
using namespace std;

int count_total_set_bits(int n){
    int count = 0;
    for(int i = 0; i<n; i++){

        if((n & 1) == 1)
            count ++;

     n = n >> 1;
    }
    return count;
}
int main(){
    int n = 5;
    cout <<count_total_set_bits(n); 
}