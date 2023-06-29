#include<iostream>
using namespace std;
int power(int a , int n){
    int res = 1;

    for(int i = 0 ; i< n; i++){
        res = res * a;
    }
    return res;


}
int main(){

    int a = 4, n = 2;
    cout <<power(a , n);
}
// doubt
