#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cin>>n;
    while(i <= n) {
        int j = 1;
        while(j <= i) {
            char ch = 64 + i;
            cout<<ch;
            j++;
        }
        i++;
        cout<<endl;
    }
}