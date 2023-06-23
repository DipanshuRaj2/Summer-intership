#include<iostream>
using namespace std;
bool palindrome(int n){
    int temp = n;
    int res = 0;
    while(temp!=0){
        int id = temp%10;
        res = (res *10) + id;

        temp = temp/10;
    }
    return (n == res);

}
int main(){
    int n;
    cin >> n;

    if(palindrome(n)){
        cout <<n <<" Palindrome no.";

    }
    else
        cout << n <<" not Palindrome";
}



































