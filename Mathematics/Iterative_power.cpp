/*we find the power of any no. 
ex:- 2^4 = 16 , 4^3 = 64

in previous solution the time complexity of code O(n) and Auxiliary space O(1);
which is not good and efficent solution 

So we write the code of time complexity O(log n) and Auxiliary space O(1);
*/
#include<iostream>
using namespace std;

int power(int x , int n){
    int res = 1;
    
    while(n > 0){
        
        if(n % 2!= 0)
        {
            res = res * x;
        }
        x = x * x;

        n  = n / 2;
    }
    return res;

}
int main(){
    int a , b ;
 
    cout << "Enter the value of a :- "<<endl ;
    
    cin >> a;

    cout << "Enter the value of power how much power insert :- "<<endl ;

    cin >> b;

    cout << power(a , b) << endl;

    cout << "Output is : "<<a <<" ^ " << b<<" = " <<power(a, b)<<endl;
}