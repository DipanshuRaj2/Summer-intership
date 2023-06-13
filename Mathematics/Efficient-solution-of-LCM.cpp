//It is the formula of a*b = gcd(a,b) *LCM(a,b);
#include<iostream>
using namespace std;
int gcd(int a , int b){
    if(b==0){
        return a;
    }
    return gcd(b ,a%b);
}
int LCM(int a , int b){
    return (a * b)/gcd(a,b);
}
int main(){
    int a = 12 , b = 24;

    cout <<LCM(a ,b);

}
//time complexity a*b=gcd(a,b)*LCN(a,b) 