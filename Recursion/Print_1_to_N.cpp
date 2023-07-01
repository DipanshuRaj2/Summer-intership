#include<iostream>
using namespace std;
void print_1_to_N(int n){
    if(n == 0) return;
    else{
     print_1_to_N(n-1);
     cout << n <<" ";
    }
}
int main(){
    print_1_to_N(5);
}