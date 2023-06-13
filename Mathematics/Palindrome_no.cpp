#include<iostream>
using namespace std;
bool is_pal(int n){
    int temp = n;
    int rev = 0;
    while(temp!=0){
        int ld = temp%10;
        rev = (rev*10) + ld;
        temp = temp/10;
    }

    return (n==rev);
}
 int main(){

    int n = 8;
    cout<<is_pal(n);
}