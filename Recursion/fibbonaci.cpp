#include<iostream>
using namespace std;

int fib(int n) {
    
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1) + fib(n-2);

}

int main() {
    
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    int ans = fib(n);
    cout<<endl;
    cout<<n<<"th Fib term is "<<ans<<endl;

    return 0;
}
