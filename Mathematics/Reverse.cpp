#include<bits/stdc++.h>
using namespace std;
int reverse(int n ){
    int rev = 0;
    int temp = n;
    while(n != 0){
        temp = n%10;
        rev = (rev * 10)+temp;

        n = n/10;

    }
    return rev;

 }
int power(int n){
    int reverseNum = reverse(n);
    return pow(n , reverseNum);
}
int main(){
    int n;
    cin >> n;
    cout <<power(n);
}