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
    	
//     	return 0;
// }
