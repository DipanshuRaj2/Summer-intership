#include<iostream>
using namespace std;
int largestEle(int arr[], int n){

    int res = 0;
    
    for(int i = 0; i<n; i++){
        if(arr[i]> arr[res])
                res = i;
    }
    return arr[res];
}
int main(){
    int arr[]= {5, 8, 20, 10};

    cout <<"Largest Element "<<largestEle(arr , 4);

    return 0;
}