#include<iostream>
using namespace std;


int main(){
    int a = 4;
    int b = 10;

    int temp = a;

    a = b;

    b = temp;

    cout << a <<" "<< b;

}