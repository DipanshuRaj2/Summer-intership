/*
#include<iostream>
using namespace std;

void printFun(int test){
    if(test < 1)
        return;

    else
    {
        cout << test;

        printFun(test - 1); //statement 2
        
        cout << test;

        return ;
    }
}
int main(){
int test = 3;
printFun(test);

}

output : 321123
*/
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==0) return ;

    fun(n-1);

    cout << n <<endl;

    fun(n-1);
}
int main(){
    fun(3);

    return 0; 
}
//output:1
// 2
// 1
// 3
// 1
// 2
// 1
