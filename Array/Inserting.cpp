// #include<iostream>
// using namespace std;

// int main(){
//     int arr[6] = {10 ,20 , 30 , 40, 50};


//     for(int i = 0; i<5 ; i++)
//         cout << arr[i] <<" ";
 
//     cout << endl;

//     int pos , x;
//     cout << "Enter the Position \n";

//     cin >> pos;

//     cout <<"Enter the Element \n";

//     cin >> x;

//     int idx = pos-1;

//     for(int i = 4; i >= idx; i--)
//         arr[i+1]= arr[i];
    
//     arr[idx] = x;
    

//     for(int i = 0; i<=5; i++)
//         cout << arr[i] <<" ";
    
// }

// #include<iostream>
// using namespace std;
// int insert(int arr[], int n , int x, int cap, int pos){
//     if(n == cap)
//         return n;

//     int idx = pos - 1;

//     for(int i = n-1; i>=idx; i++)
//       arr[i+1] = arr[i];

//     arr[idx] = x;

//     return n +1;
// }
// int main(){
//     int cap = 5 , n = 3;

//     int arr[5] ={5, 20 , 30};

//     cout << "before insertion \n";
//     for(int i = 0; i<n; i++)
//         cout << arr[i] <<" ";

//     cout << endl;
//     int pos , x;

//     cout <<"Enter the position :- ";
//     cin >> pos;

//     cout <<"Enter the Element :- ";
//     cin >> x;

//     n = insert(arr ,n , x, cap, pos);

//     cout <<"After insertion :\n";
//     for(int i = 0; i<n; i++)
//         cout << arr[i] <<" ";
    
// }
// #include<iostream>
// using namespace std;
// int insertion(int arr[], int n, int cap, int x, int pos){
//   if(n == cap)
//    return n;

//   int idx = pos -1;

//   for(int i = n-1 ; i >=idx; i--)
//     arr[i+1] = arr[i];

//   arr[idx] = x;

//   return n+1;
// }
//   int main(){
//     int arr[5], cap = 5, n = 3;

//     arr[0] = 5; arr[1]= 10; arr[2]=20;

//     cout <<"Before Insertion "<< endl;

//     for(int i = 0; i < n; i++)
//       cout <<arr[i]<<" ";

//     cout << endl;
    
//     int x = 7 , pos = 2;

//     n = insertion(arr,n, cap, x, pos);

//     cout <<"After Insertion "<< endl;

//     for(int i = 0; i < n; i++){
//       cout << arr[i] <<" ";
//     }
//   }

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

  n= insertion(arr , n, pos, x, cap);

  for(int i = 0; i<n; i++)
      cout << arr[i] <<" ";
}