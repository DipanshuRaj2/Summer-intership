//here we find the hcf of given two no.
#include<iostream>

using namespace std;
//naive approach
int gcd(int a , int b){
    int res = min(a, b);
    while(res!=0){
        if(a%res==0 && b%res==0){
            break;
        }
        res --;
    }
    return res;
}
int main(){
    int a = 12 , b = 13;
    cout <<gcd(12, 13);
}
