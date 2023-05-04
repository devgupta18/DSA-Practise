#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cin>>n;
    while(i <= n) {
        int j = 1;
        //First Approach
        // char ch = 64 + i;
        // while(j <= i) {
        //     cout<<ch;
        //     ch++;
        //     j++;
        // }
        
        //Second Approach
        while(j <= i) {
            char ch = 65 + i + j - 2;
            cout<<ch;
            j++;
        }
        
        i++;
        cout<<endl;
    }
}