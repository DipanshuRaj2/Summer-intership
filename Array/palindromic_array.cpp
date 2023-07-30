/*
Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

Example 1:

Input:
5
111 222 333 444 555

Output:
1

Explanation:
A[0] = 111 //which is a palindrome number.
A[1] = 222 //which is a palindrome number.
A[2] = 333 //which is a palindrome number.
A[3] = 444 //which is a palindrome number.
A[4] = 555 //which is a palindrome number.
As all numbers are palindrome so This will return 1.
Example 2:

Input:
3
121 131 20
 
Output:
0

Explanation:
20 is not a palindrome hence the output is 0.*/
#include<iostream>
using namespace std;

bool palindrome(int n){
    int temp = n;
    int res = 0;
    while(temp != 0){
        int i = temp % 10;

        res = (res*10)+i;

        temp = temp/10;

    }
    if(n == res) return 1;
    else
        return 0;
    
}
int palindromic_arr(int arr[] , int n){
    for(int i = 0; i<n; i++){
        if(!palindrome(arr[i])) return 0;
    }
    return 1;
}
int main(){
    int n ;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(!palindromic_arr(arr ,n))
     cout << "Given Array is not palindrome";
    else
      cout <<"Palindromic array";
    
}