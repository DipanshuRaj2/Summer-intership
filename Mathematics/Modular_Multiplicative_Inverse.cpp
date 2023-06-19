#include<iostream>
using namespace std;

int modInverse(int a , int m){
    //taking modulo of a with m

    a = a%m;

    //For every number x , check if(a * x)%m is 1
    for(int x= 1; x<m; x++){

        if((a*x) % m == 1)
            return x;
    }
       return -1;

}
int main(){
    int a , m;


    cout <<"Enter the value of a" <<endl;

    cin >> a;

    cout <<"Enter the value of mod m" <<endl;
    
    cin >> m;

    cout << modInverse(a , m)<<endl;

    cout <<"The outPut is "<<a <<" * "<<modInverse(a ,m )<<" = 1 "<<"mod "<<m;
}
/* int this code we find the value of x 

a *(x)=1 mod m
for example 

3 *(x) = 1 mod 5
we have to put the value of x from 1 untill and unless when the mod value equal to 1.

start from 1
3 * 1 != 1 mod 5;  

then from 2
3 * 2 = 1 mod 5;

output is 1;
*/