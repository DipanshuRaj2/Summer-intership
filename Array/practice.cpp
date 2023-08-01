#include<iostream>
using namespace std;
int insertion(int arr[],int n , int pos, int x, int cap){
  if(n == cap)
    return n;

  int idx = pos -1;
  for(int i = n-1; i >= idx; i--){

    arr[i+1] =arr[i];

  }
  arr[idx] = x;

  return n+1;
}
int main(){
  int n , cap , x , pos ;

  cout <<"Enter the capacity of array ";
  cin >> cap;

  cout <<"Enter the size of array ";
  cin >> n;

 int arr[cap];

  cout <<"Enter the Elements of array ";
  for(int i = 0; i<n; i++){
    cin >> arr[i];
  }

  cout <<"Enter the position you want to insert ";
  cin >> pos;

  cout <<"Enter the Element you want to insert ";
  cin >> x;

  int z= insertion(arr , n, pos, x, cap);

  for(int i = 0; i<z; i++)
      cout << arr[i] <<" ";
}