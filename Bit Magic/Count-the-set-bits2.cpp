/*we are given number and we have to count the set bits

Brian kerningam's algorithm
we have simply doing operation = n & n-1

Ex:-
input 5 
output = 2;
Explanation: binary representation of 5 101 we have to count the set bits(1) that is 2;

Input 7(111);
output = 3;

time complexity = how many set bits are present in the given number than times are running
*/
#include<iostream>
using namespace std;

int counttheSet_bits(int n){
    int res = 0;
    
    while(n > 0){

         n= n & (n-1);

         res++;
    }
    return res;
}
int main(){
    int n ;

    cin >> n;

    cout <<"There are "<<counttheSet_bits(n)<<" set bits in the "<<n<<".";
}
