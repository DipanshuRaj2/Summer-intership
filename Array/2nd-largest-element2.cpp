// 2) Efficient Approach:
//In this approach, we find the 2nd largest element in the array, by a single traversal through the array. We maintain the record of the Largest and Second Largest element, which traversing through the array.
//T.C = O(n);

#include<iostream>
using namespace std;

int secondLargest(int arr[] , int n) {
    int res = -1 , largest = 0;

    for(int i = 1; i < n; i++){

        if(arr[i] > arr[largest]){
            
            res = largest;
            largest = i;

        }
        else if(arr[i] != arr[largest])
        {
            if(res == -1 || arr[i] > arr[res])
                    res = i;
        }
    }
    return arr[res];
}
int main(){
    int arr[] ={5, 20 , 12 , 20, 8};

    cout << "Second largest : "<<secondLargest(arr , 5);
}