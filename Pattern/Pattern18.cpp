#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cin>>n;
    while(i <= n) {
        int j = 1;
        int space = 0;
        while(space < i-1) {
            cout<<" ";
            space++;
        }
        while(j <= n-i+1) {
            cout<<i + j - 1;
            j++;
        }
        cout<<endl;
        i++;
    }
}