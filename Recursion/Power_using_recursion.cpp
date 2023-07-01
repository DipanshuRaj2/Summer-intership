#include<iostream>
using namespace std;
    // in these problem we use loop but in the question said using recursion to find the power of any number
// int power(int n , int r){
//     int count = 1;
//     for(int i = 1; i<=r;i++)
//         count = count * n;

//     return count;
// }
int power(int n , int r){
    if (n == 0) return 0;
    if (r == 0) return 1;

    else
        return n * power(n, r-1);

}
int main(){
    int n , r;

    cout <<"Enter the value of n ";

    cin >> n;

    cout <<"Enter the value of r ";

    cin >> r;

    cout << "power of "<<n <<"^" <<r <<"="<<power(n , r);
}