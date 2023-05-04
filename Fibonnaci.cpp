#include<iostream>
using namespace std;
int main() {
    int n=10;
    int a=0, b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<10; i++) {
        int c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}