// bitwise And :&
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x  = 3 , y = 6;

    cout << (x & y)<<endl; // & opertor 2

    cout <<(x | y) << endl; //or opertor 7

    cout <<(x ^ y) << endl; // xor opertor 5

    cout << (x << 1) << endl; // left shift << 6 *2
  
    cout <<( x << 2) << endl; // left shift << 12 *2
    
    int z =(x << y);// <<

    cout << z << endl; //192

    cout << (x >> 1) << endl;  //1 >>Right shift / 2

    cout << (x >> 2) << endl; //0 >>right shift / 2*2

    cout <<(x >> z) << endl; // 3 >>right shift

    unsigned int a = 1;
    
    cout << (~a) << endl; //4294967294 (2^32 -1)

    unsigned int b = 5;

    cout << (~b) << endl; //4294967290 2^32 -5;

    // signed bits

    int  c = 1;//(-1 - 1)
    
    cout <<(~c) << endl;

    int d = 5; // (-5 - 1)

    cout <<(~d) << endl;

}