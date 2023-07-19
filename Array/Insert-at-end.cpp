#include<bits/stdc++.h>
using namespace std;

int insertAtEnd(int arr[] , int n , int element){
    
    
    arr[n-1] = element; // insert the element in the last index

}
int main(){
 
    int n  , element;
 
    cout << "Enter the size of the array :- ";
   
    cin >> n;//size of array

    int arr[n];


    cout <<"Enter the Elements you want to insert : ";

    for(int i = 0; i <n-1 ; i++){

        cin >> arr[i];
  
    }
    
    cout <<"Enter the element you want to insert at last index :- ";

    cin >> element;

    insertAtEnd(arr , n ,element);
    for(int i = 0; i<n; i++){
        cout <<arr[i]<<" ";
    }

}

  
    




