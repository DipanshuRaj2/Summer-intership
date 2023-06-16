//Here is the efficient method of prime no which has time complexity O(square_root(n));
#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==1)
        return false;
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
        else 
            return true;   

    }
}
int main(){
    int n = 34;
    cout<<isPrime(n);
}