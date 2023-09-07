#include<iostream>
using namespace std;
int deletion(int arr[], int n , int size,int x ){
    int i=0;
    for(i =0; i<n; i++)
        if(arr[i] ==x)
            break;
    int j = i;
    for(int i = j; i<n-1; i++){
        arr[j] =arr[j+1];
    }
    
    return (n-1);
}
int main(){
   
    int n ,size;
    cin >> size >> n;

    int arr[size];

    for(int i = 0; i < n; i++)
            cin >> arr[i];
    
    
    int x ;
    
    

    cin >> x ;

    n = deletion(arr , n , size, x);
    
    for(int i = 0; i<n ; i++)
        cout << arr[i]<<" ";

}