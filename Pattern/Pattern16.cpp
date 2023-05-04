#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    int count = 1;
    cin>>n;
    while(i <= n) {
        int j = 1;
        int space = n - i;
        while(space) {
            cout<<" ";
            space--;
        }
        while(j <= i) {
            cout<<count;
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}