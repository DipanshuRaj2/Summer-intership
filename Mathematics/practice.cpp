// #include<iostream>
// using namespace std;
// countThedigit(int n){
//     int ans = 1;
//     while(n!=1){
//         ans =n * ans;
//         n--;
//     }
//     return ans;
// }
// int main(){
//     int n =6;
//     cout<<countThedigit(n);
//     return 0;
// }
// trailing zero 
#include<iostream>
using namespace std;
int trailingZero(int n){
    int ans = 1;
    int res =0;
    while(n!=1){
        ans = ans * n;
        n--;
    }
    while(ans%10==0)
    {
        res++;
        ans = ans/10;
    }
    return res;
}



int main(){
    int n = 100;
    
    cout << trailingZero(n);
}
