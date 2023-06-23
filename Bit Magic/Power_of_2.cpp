// in this code we check the given no. is the power of 2 .
//for ex:- 8  true (power of 2)
// for ex :- 4 true
// for ex :-6 false(not power of 2)
#include<iostream>
using namespace std;
bool powerOf2(int n){
    if(n == 0){
        return false;
    }
    while(n != 1){
        if(n % 2 != 0){

            return false;

        }
        n = n/2;

    }
    return true;
}
int main(){
    int n; 
    
    cout <<"Enter the Number wants :- ";

    cin >> n;

    if(powerOf2(n)){
        cout <<n<<" is power of 2 :- "<<endl;
    }
    else    
        cout <<n<<" is  not power of 2  "<< endl;
}