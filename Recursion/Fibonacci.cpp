// #include<iostream>
// using namespace std;
// //using recursion
// int fibonacci(int n){
//     if (n==0) return 0;
//     if (n == 1) return 1;

//     else
//         return fibonacci(n-1)+fibonacci(n-2);
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << "fibonacci no. of " << n <<" :- "<<fibonacci(n);
// }
#include<iostream>
using namespace std;
//without using recursion
void fibonacci(int n){
    int a = 0;
    int b = 1;

    for(int i = 0; i <= n ; i++){
        cout << a <<" ";
        int temp = a +b;
        a = b;
        b = temp;}
}
int main(){
    fibonacci(4);
}