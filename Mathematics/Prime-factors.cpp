#include<iostream>
using namespace std;
int primeFactors(int n){
    for(int i = 2; i<n; i++){
    
        if(isPrime(i)){

            int x = i;

            while(n%x == 0){

                cout << i;

                x = x*i;
            }
        }
    }
}
int main(){
    int n = 15;
    cout<<primeFactors(n);
}