#include<iostream>
#include<vector>

using namespace std;

int main(){
 vector<int> v;
 
 //Push elements
 for(int i = 0; i<=5; i++)
    v.push_back(i);

 cout <<"Size : " <<v.size();

 //checks if the vector is empty or not";

 if(v.empty() == false)
        cout <<"\nVector is not empty ";

 else   
        cout <<"\nVector is empty ";


cout <<"\nOutput of begin and end: ";
for(auto.i = v.begin(); i != v.end(); ++i){
    cout <<*i <<" ";
}

//Inserts at the beginning 
v.emplace_back(20);
cout <<"\nThe first element is: "<<;

}