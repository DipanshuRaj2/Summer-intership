#include<iostream>
using namespace std;

void decimal(int n){
    if(n == 0) return ;
 
    decimal(n /2);

    cout <<(n % 2) <<" ";
}
int main(){
    decimal(7);
}