#include<iostream>
using namespace std;
bool Armstrong(int n){
    int temp = n; // store the value of n

    int sum = 0;

    while(n > 0){
        int countDigits = n % 10; // last digit

        sum= sum + (countDigits*countDigits*countDigits);

        n = n / 10;
    }
    return (temp == sum);

}
int main(){
    int n; 
    cin >> n;

    if(!Armstrong(n))
        cout << "Not Armstrong Number ";

    else
        cout <<"Armstrong Number ";
}