#include<iostream>
using namespace std;
bool isPrime(int n){
    //1 is neither prime no. nor composite no.
    //2 is only even prime no.
    //composite no: the number which has more than 2 divisors
    if(n==1){
        return 0;
    }
    for(int i = 2; i <n; i++){
        if(n%i==0)
            return 0;
    }
    return 1;

}
int main(){
    int n ;
    cin >> n;
    if(isPrime(n)) {
        cout<<"is a prime no." << endl;
    }
    else{
        cout<< "not a prime no."<<endl;
    }
   //time complexity  O(n); (upper bound)
   //                  O(1);(Lower Bound)
}