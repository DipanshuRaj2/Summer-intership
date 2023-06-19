/*#include<iostream>
using namespace std;
void printDivisors(int n){

    for(int i = 1; i*i<=n; i++){
        if(n % i == 0){

            cout << i <<" ";

            if(i != n/i)
                cout << n/i << " ";
            
        }

    }
}
int main(){
    int n = 46;
    
    cout << "no of Divisors of "<<n<<" :- ";
    printDivisors(n);
}*/
//In this case the output is not in the sorted 
// for ex. no of Divisors of 46 :- 1, 46 2, 23
// So we print the output in the sorted type: 1, 2, 23, 46

#include<iostream>
using namespace std;
void printDivisors(int n){
    int i;
    for(i = 1; i*i<n; i++){
        
        if(n % i == 0){
            cout << i << " ";
        }
    }
    for(; i>=1;i--){
        if(n % i == 0){
            cout << n/i <<" ";
        }
    }
}
int main(){
    int n  = 50;
    cout << "no of Divisors of "<<n<<" :- ";
    printDivisors(n);
}