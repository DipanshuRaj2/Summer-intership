#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1)
        return 0;

    for(int i = 2; i * i <= n; i++){

        if(n % i == 0)
            return 0;
    }
    return 1;
}

void printPrime(int n){
for(int i = 2 ; i <= n; i++){
    if(isPrime(i))
        cout << i <<" " ;
}
}
int main(){
    int n = 25;
    printPrime(n);

} 