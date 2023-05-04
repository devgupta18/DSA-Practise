#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cin>>n;
    while(i <= n) {
        //First approach
        // int j = n;
        // while(j >= 1) {
        //     cout<<j;
        //     j--;
        // }
        // i++;
        // cout<<endl;

        //Second Approach
        int j = 1;
        while(j <= n) {
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}