#include<iostream>
using namespace std;
/*
int countZero(int n){
   
   1.Naive approach to count the 0 in the factorial .
   2. It't not count the zero in bigger no of factorial .

   int fact = 1;
    for(int i = 1; i<=n;i++){
        fact = fact *i;
    }
     int res = 0;

    while(fact!=0){
        res++;
        fact = fact/10;

    }
    return res;
    */

   int countTrailingZeros(int n){
    int res = 0;
    for(int i = 5; i<=5; i=i*5){
        res = res + (n/i);
    }
    return res;
   }

int main(){
    int n = 98;
    cout << countTrailingZeros(n);
}
