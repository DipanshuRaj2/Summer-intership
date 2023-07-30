#include<iostream>
using namespace std;
int special_countDigit(int n){
    int originalNumber = n; 

    int count = 0; // store the value of answer;

    while(n > 0){
        int lastDigit = n % 10;
        if(lastDigit != 0 && originalNumber%lastDigit==0)
        count ++;
        n = n/10;
    }
    return count;
}
int main(){
    int n ;

    cin >> n;


    // if(!special_countDigit(n))
    //     cout << "Digit not divide the number "<<n;

    // else
    //     cout <<"Digit divide the number "<< n;

    cout<<special_countDigit(n)<<" "<<"Digit divide of Number "<<n;
}