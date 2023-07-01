#include<iostream>
using namespace std;


bool isPal_string(string str, int start, int end){
    if(start >=end)
      return true;
    return
    ((str[start]==str[end]) && isPal_string(str,start +1,end -1));
}
int main(){
    string s = "malayalam";
    cout <<isPal_string(s, 0, s.length()-1);

}

//&& logical and means that if the first condition true then the second condition check;
//if the first condition is false then the other condition not check.
//time complexity O(n) and auxiliary space O(n);
//best case O(1) and O(1) when the first string does not match they simply return false;