#include<iostream>
using namespace std;

int search(int arr[] ,int key, int n)
{
    for(int i = 1;  i < n; i++){
        if(arr[i] == key)
         return i;
    }
    return -1;  // elemnent is not found 

}
int main(){
    
    int arr[] = {12,43,54,34};

    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 54;

    int result= search(arr , key, size) ;

    if(result != -1)
        cout << "Element " << key <<" found at index "<<result << endl;

    else
        cout <<"Element " << key <<" not found the in the array" << endl;


    return 0; 
}
// time complexity O(n);