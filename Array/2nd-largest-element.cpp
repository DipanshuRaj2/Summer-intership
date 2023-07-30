//Given an array arr[ ] of size n, the task is to find the Second largest element in the given array. 

// we have simply traverse two times to find the second largest element

//In this approach, we find the 2nd largest element in the array, by ignoring the largest element. It requires two traversals of the array

// T.C = O(n);
#include<iostream>
using namespace std;

int getLargest(int arr[], int n){
    int largest = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[largest])
            largest = i;
    }
    return largest;
}
int secondLargest(int arr[] , int n) {
    int largest = getLargest(arr , n);

    int res = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] != arr[largest]){

            if (res == -1)
                res = i;

            else if(arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}


int main(){

    int arr[] ={12,10,26,25};
    cout <<"Second largest : "<<secondLargest(arr , 4);
}