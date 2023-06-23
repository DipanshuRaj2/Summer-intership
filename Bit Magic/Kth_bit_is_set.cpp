/*
in these code we check the set bits(k) or not
Given a number n, check if the Kth bit of n is set or not.

Examples: 

Input: n = 5, k = 1
Output: SET
Explanation: 5 is represented as 101 in binary and has its first bit set.

Input: n = 2, k = 3
Output: NOT SET
Explanation: 2 is represented as 10 in binary, all higher i.e. beyond MSB, bits are NOT SET.

Input: n = 34 , k= 3
Output: NOT SET
Explanation : 34 is represented as 100010 in binary, and k = 3 which is 0 that is not set bit (when the k = 2 then the output is set bit) ;

Time complexity: O(k);
*/


#include<iostream>
using namespace std;
void isSet(int n , int k){
    // 1st naive solution
    /*int x = 1;

    for(int i =0; i<(k-1); i++){

        x = x * 2;
    }
    if((n & x)!= 0)
        cout << "Yes";

    else    
       cout << "No";
*/
// 2nd naive solution
for(int i = 0; i<(k-1); i++){

    n = n/2;
}
if((n&1)!=0)
    cout <<"Yes";

else
    cout <<"No";
}
int main(){
    int n  = 39;
    int k = 5;
    isSet(n , k);
}

