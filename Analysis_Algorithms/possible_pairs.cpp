#include<bits/stdc++.h>
using namespace std;

int print(int a[] , int n){
    for(int i= 0; i<n; i++){
        for(int j = 0;j<n;j++){
           if(i != j){
            cout <<a[i]<<" "<<a[j]<<endl;
           }

        }
    }
}
int main(){
    //given array
    int a[]={1,2,3};

    //store the size of the array
    int n =sizeof(a)/sizeof(a[0]);
    print(a,n);
    return 0;
}