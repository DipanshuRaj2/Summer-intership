// You are given a number n. You need to find the sum of digits of n.

// Example 1:

// Input:
// n = 1
// Output: 1
// Explanation: Sum of digit of 1 is 1.

//Example 2

// n = 99999
// Output: 45
// Explanation: Sum of digit of 99999 is 45.


// #include<iostream>
// using namespace std;
// int count_the_digit(int n){
//     int temp = n;
//     int count = 0;
//     while(n != 0){

//         temp = n%10;
//         count = count + temp;
//         n = n/10;

//     }
//     return count;
// }
// int main(){
//     cout<<count_the_digit(5478);
// }

//Now using recursion to solve the given problem;
#include<iostream>
using namespace std;
int sum_of_digits(int n){
    if(n == 0) return 0;
    return
        sum_of_digits(n/10) + n%10;
}
int main(){
    int n = 253;
    cout <<"sum of digits "<<n <<" : "<<sum_of_digits(n);
}
