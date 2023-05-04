#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cin>>n;
    while(i <= n) {
        int count = i;
        int j = 1;
        while(j <= i) {
            //First Approach
            cout<<count;
            count++;

            //Second Approach
            // cout<<i + j - 1;
            j++;
        }
        i++;
        cout<<endl;
    }
}