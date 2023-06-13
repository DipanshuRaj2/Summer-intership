/*
You are given an interger I, find the absolute value of the interger I.


Input:
I = -32
Output: 32
Explanation: 
The absolute value of -32 is 32.


Input:
I = 45
Output: 45
Explanation: 
The absolute value of 45 is 45 itself
*/
#include<iostream>
using namespace std;
int absolute(int i){

    if(i<0)
        return -1 * i;
    else
        return i;  
}
int main(){
    int i ;
    cin >> i; 
    cout <<"absolute value :- "<< absolute(i);
    return 0;
}
