#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    char ch = 'A';
    cin>>n;
    while(i <= n) {
        int j = 1;
        while(j <= i) {
            cout<<ch;
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }
}