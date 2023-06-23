/*we are given number and we have to count the set bits

Ex:-
input 5 
output = 2;
Explanation: binary representation of 5 101 we have to count the set bits(1) that is 2;

Input 7(111);
output = 3;
 
 Naive approach
Time coplexity = O(d) 
d = No.of bits from last to MSB(Most significant bits).
*/
#include<iostream>
using namespace std;

int countSet_bits(int n){
    int res =0;
    
    while(n > 0){
        
        if(n % 2 == 1)
            res++;
        n = n/2;
    }
    return res;
}
int main(){
    int n ;

    cin >> n;

    cout <<"There are "<<countSet_bits(n)<<" set bits in the "<<n<<".";
}