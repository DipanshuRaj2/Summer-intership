/*
power of 2 using Brian Kernighan's algorithm

In these algo. we check the given number is the power of 2 or not .

Ex = 24 not power of 2;
32 is power of 2;

:- set bit : the power of 2 has only 1 bit called the set bit.
ex = 4 binary representation 0100 (4 is set bit)
  32 = 10000 (16 is set bit)

hence we find the set bit or not.

:- we do bitwise AND with the number which is just less than the number which can be represented as the power of (2) then the result will be 0 . 

ex: 4 can be represented as (2^2 ) , 
    (4 & 3)=0  or in binary (100 & 011=0)[true]

  16 can be represented as (2^4) ,
  (16 & 15) = 0 or in binary(10000 & 01111 = 0)[true]

  15 can be represented as (2^4 -1),
   (15 & 14) = 0 or in binary(01111 & 01110 != 0)[false].

   Time Complexity:O(1)
   Auxiliary Space:O(1)
*/
#include<iostream>
using namespace std;
bool countThepower(int n){
    if(n == 0)
        return false;
    else    
        return ((n & (n-1)) == 0);
}
int main(){
    countThepower(30) ?  cout <<"Yes\n" :cout << "NO\n";

    countThepower(128) ?  cout <<"Yes\n" :cout <<"NO\n";
}