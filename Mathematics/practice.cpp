// //palindrome no.
// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     int temp = n;
//     int rev = 0;
//     while(temp!= 0){
//        int ld = temp % 10;
//        rev = (rev*10)+ld;
//        temp= temp/10;
//     }
//     return (rev==n);
// }
// int main(){
    
//     int n ;
//     cin >> n;
//     if(isPrime(n))
//       cout <<n<<" is a palindrome No.";
//     else
//     cout<<n<<" is not a palindrome No.";
// }

//count the factorial 
// #include<iostream>
// using namespace std;
// int factorial(int n){
   
//         int res = 1;
    
//     for(int i = 2; i<=n; i++){
//         res = res * i;
//     }

//     return res;
    
// }

// int main(){
//     int n ;
//     cin >> n;
//     cout<<"Factorial of "<<n <<" :- "<<factorial(n);
// }

//HCF and LCM
// #include<iostream>
// using namespace std;
// int LCF(int a ,int b){
//     int res = max(a,b);
//     while(true){
//         if((res%a==0) && (res%b==0)){
//             break ;
//         }
//         res++;
        
//     }
//     return res;
// }
// int main(){
//     int n , m;
//     cin >>n>>m;
//     cout<<"LCF of "<<n <<", "<< m<<" :- "<<LCF(n , m);

// }
// #include <iostream>
// #include <limits.h>
// using namespace std;

//  void printPrimeFactors(int n)
// {
// 	if(n <= 1)
// 		return;

// 	for(int i=2; i*i<=n; i++)
// 	{
// 		while(n % i == 0)
// 		{
// 			cout<<i<<" ";

// 			n = n / i;
// 		}
// 	}

// 	if(n > 1)
// 		cout<<n<<" ";

// 	cout<<endl;
// }

// int main() {
    
//     	int n = 450;
    	
//     	printPrimeFactors(n);
    	
// //     	return 0;
// // }
#include<bits/stdc++.h>
using namespace std;
// int fun(int arr[] , int n) {
//     int x = arr[0];

//     for(int i =1; i<n; i++)

//         x = x^arr[i];

//     return x;
// }
// int main(){
//     int arr[20] = {9,12,2,11,2,2,10,9,12,10,11,2};

//     cout <<fun(arr[20]);
// }
// int main(){
//     int a = 2 , b= 3 ;
//     int c= (a^b);

//     cout << c;

// }
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int res = 1;

//     for(int i = 1; i<=n; i++){
//         res = res * i;

//     }
//     return res;
// }
// int countThefact(int m){
//     int count = 0;
//     int factorial = fact(m);
//       while(factorial>0){

//         factorial = factorial/10;
//         count ++;
        
//       }
//       return count;

// }
// int main(){
//     int n = 123;
//     cout <<countThefact(n);
// }
#include<iostream>
using namespace std;
int powerOf2(int n ){
    int count = 0;
    if(n == 1){
        return true;
    }
    while(n != 1){
        
        
        if(n % 2 == 1){
             return false;
        }
        n = n /2;
        count++;
    }
    return count;
}
int main(){
    int n = 1024 ;
    cout <<powerOf2(n);
}