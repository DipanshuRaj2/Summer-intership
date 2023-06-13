//we find the hcf of given two no.
#include<iostream>
using namespace std;
int gcd(int a , int b){
    while(a!= b){
        if(a>b){
            a = a -b;
        }
        else
        b = b - a;
    }
    return a;
}
int main(){
   int a = 23 , b = 46;
   cout <<gcd(a , b);
} 
//in this algorithm we simply subtracting same no. it's not optimized solution. 