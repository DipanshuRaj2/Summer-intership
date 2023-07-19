#include<iostream>

using namespace std;

int deleteEle(int arr[],  int n, int x){
    int i = 0; 
    for(i = 0; i<n; i++){
        if(arr[i]==x)     //if the element is found
            break;
    }
        if(arr[i]==n)
        return n;

    for(int j = i; j < n-1; j++)
        arr[j] = arr[j+1];

    return(n-1);
      
}
int main(){

    int arr[] = {3, 8, 12, 5, 6},  x = 3, n = 5;
    
    cout <<"Before Deletion "<< endl;
    
    for(int i = 0; i<n; i++)
        cout <<arr[i] <<" ";

    cout<< endl;

    cout <<"After Deletion"<< endl;

    n= deleteEle(arr , n, x);

    for(int i = 0;  i < n; i++){
        cout << arr[i]<<" ";
    }
    
}