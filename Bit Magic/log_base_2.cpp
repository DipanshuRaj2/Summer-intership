#include<iostream>
using namespace std;
int log2(int x){
    int res = 0;

    while(x >>=1)
      res ++;
    return res;
}
int main(){
    int n = 34; 
    cout <<log2(n); //5
}