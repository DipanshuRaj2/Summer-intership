/*check the how many exactly 3 divisors are available of given No.
N = 6
N <=6; 
1 = 1
2 = 1 , 2
3 = 1 ,3
4 = 1, 2 , 4 (exactly 3 divisors true)
5 = 1 , 5
6 = 1, 2, 3 ,6

here is the naive approach 
*/

#include<iostream>
using namespace std;

bool numberofFactors(int n){
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(n%i == 0){
            count ++;
        }
    }
    return count == 3;
}
int exactly3Divisors(int N){
    int ans = 0;
    for(int i = 1 ; i<=N; i++){
        if (numberofFactors(i))
            ans++;
    }
    return ans;
}
int main(){
    int n = 10;
    cout <<exactly3Divisors(n);
}
