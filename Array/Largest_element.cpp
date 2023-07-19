//naive approach 
#include<iostream>
using namespace std;

int getLargest(int arr[] ,int n){
    for(int i = 0; i < n; i++)
    {
        bool flag = true;

        for(int j = 0; j < n; j++){
            if(arr[j] > arr[i]){
                flag = false;
               break;
            }
        }
        if(flag == true)
          return arr[i];
    } 
    return -1;
}
int main()
{
    int arr[] = {5, 8 , 20 , 10};

    cout<<"Largest Element "<<getLargest(arr, 4);
    return 0;
}
//Time complexity = O(n^2);