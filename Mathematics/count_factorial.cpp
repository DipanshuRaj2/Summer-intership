#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
double res = 0;
for(int i = 1; i<=n; i++){
    res = res + log10(i);
}
return (floor(res)+1);
}
int main(){
    int n = 5;
    cout << factorial(n);
}
