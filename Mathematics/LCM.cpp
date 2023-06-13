//naive approach to find the LCM
#include<iostream>
using namespace std;
int LCM(int a , int b){
    int res = max(a ,b);
    while(true){
        if (res%a==0 && res%b==0)
        {
            break;
        }
        res++;
        
    }
    return res;
}
int main(){
    int a = 34 , b = 16;
    cout <<LCM(a,b);
}
//Time complexity O(a*b -max(a,b));