#include<bits/stdc++.h>
using namespace std;

        
    double termOfGP(int A,int B,int N)
    {
        // common ratio is given by r=b/a
        double r=(double)B/(double)A; 
        // Nth term is given by a(r^(N-1))
        return (A*pow(r,N-1)); 
    }
// here is the common ratio in the sequence which is R;
int main(){
    int a , b , n;
    cin >> a >> b >> n;
    cout << "the first term"<< a << endl;
    
    cout<<"The Second term "<< b<< endl;

    cout <<"total no of term "<< n<< endl;

    cout <<termOfGP(a, b, n);
}
