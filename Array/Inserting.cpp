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

#include<iostream>
using namespace std;
int insert(int arr[], int n , int x, int cap, int pos){
    if(n == cap)
        return n;

    int idx = pos - 1;

    for(int i = n-1; i>=idx; i++)
      arr[i+1] = arr[i];

    arr[idx] = x;

    return n +1;
}
int main(){
    int cap = 5 , n = 3;

    int arr[5] ={5, 20 , 30};

    cout << "before insertion \n";
    for(int i = 0; i<n; i++)
        cout << arr[i] <<" ";

    cout << endl;
    int pos , x;

    cout <<"Enter the position :- ";
    cin >> pos;

    cout <<"Enter the Element :- ";
    cin >> x;

    n = insert(arr ,n , x, cap, pos);

    cout <<"After insertion :\n";
    for(int i = 0; i<n; i++)
        cout << arr[i] <<" ";
    
}