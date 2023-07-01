#include<iostream>
using namespace std;
void N_to_1(int n)
{
    if(n == 0) return ;
    cout<<n <<" ";
    N_to_1(n-1);
}
int main(){
    int n ;
    cin >> n;
    cout << "N to 1 :- ";
    N_to_1(n);
    // return 0;
}
