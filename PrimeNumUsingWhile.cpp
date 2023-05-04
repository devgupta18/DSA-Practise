#include<iostream>
using namespace std;
int main() {
    int n, i = 2;
    bool flag = true;
    cout<<"Enter a number: ";
    cin>>n;
    while(i < n) {
        if(n%i == 0) {
            flag = false;
            break;
        }
        i++;
    }    
    if(flag == true) {
        cout<<"Number is prime.";
    }
    else {
        cout<<"Number is not prime.";
    }
}