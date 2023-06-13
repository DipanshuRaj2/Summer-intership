// #include <bits/stdc++.h>
// using namespace std;

// // Linearly search x in arr[].
// // If x is present then return the index,
// // otherwise return -1
// int search(int arr[], int n, int x)
// {
//    int i;
//    for (i = 0; i < n; i++) {
//        if (arr[i] == x)
//            return i;
//    }
//    return -1;
// }

// // Driver's Code
// int main()
// {
//    int arr[] = { 1, 10, 30, 15 };
//    int x = 30;
//    int n = sizeof(arr) / sizeof(arr[0]);
//    cout<<n<<endl;

//    // Function call
//    cout << x << " is present at index "
//         << search(arr, n, x);

//    return 0;
// }

//
#include<bits/stdc++.h>
using namespace std;
bool  linearSearch(int a[], int n , int key){

    //Traverse the given array, a[]
    for(int i =0; i<n; i++){

        //check ifa[i] is equal to key
        if(a[i]==key)
        return true;
    }
    return false;
}
//Driver code
int main(){
int arr[] ={2,3,4,10,40};
int x = 10;
int n = sizeof(arr)/sizeof(arr[0]);
//function Call

if(linearSearch(arr , x , n))
    cout<<"Element is present in array ";
else
    cout<<"Element is not present in array";


    return 0;
    }