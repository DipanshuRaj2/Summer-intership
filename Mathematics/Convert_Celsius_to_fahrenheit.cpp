#include<iostream>
using namespace std;
int CtoF(double c){
    double f =(c*9/5)+32;
    return f;
}
int main(){
    int F;
    cout << "Enter the temperture in Celsius:- ";
    cin >> F;
    cout<<"fahrenheit :- "<<CtoF(F);
    return 0;
}