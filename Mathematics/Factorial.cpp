#include<iostream>
using namespace std;

// int fact(int n){
//     if(n ==0)
//         return 1;
//     return n *fact(n-1);
// }
int fact(int n){
    int res = 1;

    for(int i = 2; i<=n; i++){
        res = res * i;
    }
    return res;
}
int main(){
    int n= 5 ;
    cout <<"factorial "<<fact(n);
}  
