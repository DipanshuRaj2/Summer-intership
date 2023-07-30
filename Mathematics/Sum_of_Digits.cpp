#include<iostream>
using namespace std;

int sum_Digits(int n){
    int originalNumber = n;
    int sum = 0;

    while(n > 0){
        int lastDigit = n % 10;
        sum = sum + lastDigit;
        n =n /10;
    }
    return sum;
}
int main(){
    int n ;
    cin >> n;
    cout <<"Sum of the Digits "<<sum_Digits(n);
}