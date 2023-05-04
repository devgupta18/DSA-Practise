#include<iostream>
using namespace std;

int nStair(int n) {

    if(n < 0) return 0;
    if(n == 0) return 1;

    return nStair(n-1) + nStair(n-2);

}

int main() {

    int n;

    cout<<"Enter number of stairs: ";
    cin>>n;

    int ans = nStair(n);
    cout<<"Number of ways to climb the stairs is "<<ans<<endl;
    
    return 0;

}