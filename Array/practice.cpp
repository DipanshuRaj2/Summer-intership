// #include<iostream>
// using namespace std;
// int insertion(int arr[],int n , int pos, int x, int cap){
//   if(n == cap)
//     return n;

//   int idx = pos -1;
//   for(int i = n-1; i >= idx; i--){

//     arr[i+1] =arr[i];

//   }
//   arr[idx] = x;

//   return n+1;
// }
// int main(){
//   int n , cap , x , pos ;

//   cout <<"Enter the capacity of array ";
//   cin >> cap;

//   cout <<"Enter the size of array ";
//   cin >> n;

//  int arr[cap];

//   cout <<"Enter the Elements of array ";
//   for(int i = 0; i<n; i++){
//     cin >> arr[i];
//   }

//   cout <<"Enter the position you want to insert ";
//   cin >> pos;

//   cout <<"Enter the Element you want to insert ";
//   cin >> x;

//   int z= insertion(arr , n, pos, x, cap);

//   for(int i = 0; i<z; i++)
//       cout << arr[i] <<" ";
// }

// #include<iostream>
// using namespace std;
// int insertion(int arr[] , int n , int size, int pos, int element){
//   int idx = pos - 1;
//   for(int i = n-1; i >=idx; i--)
//       arr[i+1] = arr[i];

//   arr[idx]=element;
   
//    return n+1;

  
// }
// int main(){
//   int n ;
//   int size;
//   cin >> size;
//   cin >> n;
//   int arr[size];
//   for(int i = 0; i<n; i++)
//       cin >> arr[i];

//   int pos;
//   cin >> pos ;

//   int x;

//   cin >> x;

//   int m = insertion(arr, n, size, pos, x);

//   for(int i = 0; i < m; i++){
//     cout << arr[i]<<" ";
//   }

// }
// #include<iostream>
// using namespace std;
// int deletion(int arr[] ,int size, int n, int element){
  
//   int i ;
//   for(i = 0; i < n; i++){
//     if(arr[i] == element)
//         break;
//   }
//   if(i == n)
//     return n;

//   for(int j = i; j<n-1; j++)
//     arr[j] = arr[j+1];
//   return (n-1);
// }
// int main(){
//    int n , cap , x ;

//   cout <<"Enter the capacity of array ";
//   cin >> cap;

//   cout <<"Enter the size of array ";
//   cin >> n;

//  int arr[cap];

//   cout <<"Enter the Elements of array ";
//   for(int i = 0; i<n; i++){
//     cin >> arr[i];
//   }


//   cout <<"Enter the Element you want to delete ";
//   cin >> x;

//   n = deletion(arr , cap, n ,x);
  
//   cout <<"After deletion " << endl;
//   for(int i =0; i<n; i++){
//     cout << arr[i]<<" ";
//   }
// }
#include<iostream>
using namespace std;
int binarySearch(int arr[] , int n , int x){
  int low = 0; int high = n-1;
  while(low <= high){

    int mid = (low+high)/2;
    if(arr[mid] == x)
      return mid;

    else if(arr[mid] > x)
      high = mid -1;

    else if (arr[mid] < x)
      low = mid +1;
    

  }
  return -1;
}
int main(){
  int n;
  cin >> n;
  int arr[n];

  for(int i = 0; i <n; i++)
      cin >> arr[i];

  int x;
  cin >> x;

  int search = binarySearch(arr , n, x);
 if(search == -1)
  cout <<"Element not found "<<search;

else
  cout  <<"Element found at index "<<search;
}