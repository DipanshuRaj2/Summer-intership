//The tower which is not used is called ausiliary
#include<iostream>
using namespace std;

void towerOfHanoi(int n , char src , char aux, char dest){

    if(n == 1){
        cout << src <<"->" <<dest <<endl;
        return;
    }
    towerOfHanoi(n-1, src , dest, aux);
    towerOfHanoi(1, src , aux , dest);
    towerOfHanoi(n-1, aux, src , dest);

}
int main(){
    towerOfHanoi(2,'A','B','C');
}
//no. of movement (2^n - 1)
//time coplexity O(2^N);
//Auxiliary Space O(N);
