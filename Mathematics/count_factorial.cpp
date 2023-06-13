#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i =1; i<=n; i++){
      fact = fact*i;
    }
        int res = 0;
    while(fact!= 0){
        fact = fact/10;
        res++;
    }
    return res;

}
int main(){
    int n = 5;
    cout << factorial(n);
}
