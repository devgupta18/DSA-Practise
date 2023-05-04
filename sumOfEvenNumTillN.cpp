#include<iostream>
using namespace std;
int main() {
    int n, sum = 0, i = 0;
    cout<<"Enter a number: ";
    cin>>n;
    while(i <= n) {
        if(i%2 == 0) {
            sum += i;
        }
        i++;
    }
    cout<<"Sum of even numbers till "<<n<<" is "<<sum;
}