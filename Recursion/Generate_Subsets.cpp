#include<iostream>
using namespace std;

//str:Stores input string
//curr:stores current subset
//index:Index in current subset, curr
void powerSet(string str , int index = 0, string curr= "")
{
    int n = str.length();

    //base case
    if(index == n){
        cout << curr << "    ";
        return;
    }
    //two cases for every character
    //(i)we consider the character as part of current subset
    //(ii)we do not consider current character as part of current subset
    powerSet(str , index + 1, curr);
    powerSet(str, index+1 , curr+str[index]);

}
int main(){
    string str = "12345678";

    powerSet(str);

    return 0;

}