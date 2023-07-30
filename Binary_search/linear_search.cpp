#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n, int x){
    for(int i = 0; i< n; i++){
        if(arr[i] == x )
            return i;
    }
    return -1;
}
int main(){
    int n , x;
    cin >> n;
 
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout <<"Enter the Elements you want to search " ;
    cin >> x;
 
    int search = linearSearch(arr, n , x);
    if(search == -1)
        cout <<"Element not found "<<search;

    else
        cout <<"Element found at index no. : " << search;
    

}