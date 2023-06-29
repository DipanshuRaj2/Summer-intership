// #include <bits/stdc++.h>

// using namespace std;

// int reverseNumber(int num) {
//     int reversedNum = 0;
//     while (num != 0) {
//         reversedNum = reversedNum * 10 + num % 10;
//         num /= 10;
//     }
//     return reversedNum;
// }

// double powerToReverse(int num) {
//     int reversedNum = reverseNumber(num);
//     return pow(num, reversedNum);
// }

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
    
//     double result = powerToReverse(number);
//     cout << number << " raised to its reverse is: " << result << endl;
    
//     return 0;
// }
#include<iostream>
using namespace std;
int fact(int n){
 if (n==0) return 0;
//  if(n==1) return 1;
 else
   return fact(n-1)+fact(n-2);
}
int main(){
    cout<<fact(15);
}






























